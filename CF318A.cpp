# include <bits/stdc++.h>
using namespace std;
int main(){
	// to do
	vector<long long> even;
	vector<long long> odd;
	long long n, k;
	cin >> n >> k;
	if (k <= (n + 1) / 2)
		cout << (k * 2) - 1;
	else
		cout << (k - (n + 1) / 2) * 2;
}