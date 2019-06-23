# include <bits/stdc++.h>
using namespace std;
int main()
{
	double n, m, a;
	cin >> n >> m >> a;
	long long sol = ceil(n / a) * ceil(m / a);
	cout << sol;
}