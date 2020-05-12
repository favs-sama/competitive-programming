#include <bits/stdc++.h>
using namespace std;

int totient(int p)
{
    int count = 1;
    
    for (int i = 2; i < p; ++i)
    {
        if (__gcd(p, i) == 1)
        {
            ++count;
        }
    }
    
    return count;
}

int main()
{
    int p;
    cin >> p;
    cout << totient(p - 1);
}
