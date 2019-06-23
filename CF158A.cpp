# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int qualified = k;
	int a[n + 1];
	for (int i = 1; i <= n; i++) { 
		cin >> a[i]; 
		if (a[i] <= 0 && i <= k)
			qualified--;
	}
	
	for (int i = k + 1; i <= n; i++){
		if (a[i] >= a[k] && a[i] > 0)
			qualified++;
	}

	cout << qualified;
}