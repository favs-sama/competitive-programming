#include <bits/stdc++.h>
using namespace std;

bool IsPrime[3001];

bool IsAlmostPrime(int n)
{
    if (IsPrime[n])
    {
        return false;
    }
    
    set<int> factors;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            if (IsPrime[i])
            {
                factors.insert(i);
            }
            
            if (IsPrime[n / i])
            {
                factors.insert(n / i);
            }
        }
    }
    
    return factors.size() == 2; 
}

int main()
{
    memset(IsPrime, true, sizeof(IsPrime));
    
    // apply sieve of eratosthenes
    int p = 2;
    while (p * p <= 3000)
    {
        if (IsPrime[p])
        {
            for (int i = p * p; i <= 3000; i += p)
            {
                IsPrime[i] = false;
            }
        }
        ++p;
    }
    
    // iterative dp solution, load solutions for n = 3000 for runtime to be O(1)
    int dp[3001];
    dp[0] = 0;
    for (int i = 1; i < 3001; ++i)
    {
        dp[i] = dp[i - 1] + (IsAlmostPrime(i) ? 1 : 0);
    }
    
    int n;
    cin >> n;
    cout << dp[n] << endl;
}