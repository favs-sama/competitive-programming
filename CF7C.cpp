#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll recurse_extended_euclidean(ll a, ll b, ll& x, ll& y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    
    ll x1, y1;
    ll gcd = recurse_extended_euclidean(b % a, a, x1, y1);
    
    x = y1 - b / a * x1;
    y = x1;
    
    return gcd;
}

int main()
{
    ll a, b, c;
    
    cin >> a >> b >> c;
    
    if (c % __gcd(a, b))
    {
        cout << -1 << endl;
    }
    else
    {
        ll x, y;
        ll gcd = recurse_extended_euclidean(a, b, x, y);
        cout << (-c / gcd) * x << " " << (-c / gcd) * y << endl;
    }
}
