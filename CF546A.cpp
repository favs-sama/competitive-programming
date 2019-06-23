# include <bits/stdc++.h>
# define ll long long
using namespace std;

ll memo[1001];

int main(){
	ll k, n, w;
	cin >> k >> n >> w;
	memset(memo, 0, w + 1);
	memo[1] = 1;
	if (w > 1)
		for (int i = 2; i <= w; i++){
			memo[i] = i + memo[i - 1];
		}
	ll total = memo[w] * k;
	if (n >= total)
		cout << "0";
	else
		cout << total - n;
}