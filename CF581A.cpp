#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    
    cin >> a >> b;
    
    int days_diff_socks = min(a, b);
    a -= days_diff_socks;
    b -= days_diff_socks;
    
    int days_diff_same = 0;
    
    if (a > 0)
    {
        days_diff_same = a/2;
    }
    else
    {
        days_diff_same = b/2;
    }
    
    cout << days_diff_socks << " " << days_diff_same << endl;
}