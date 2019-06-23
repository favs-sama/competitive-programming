# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int coins[n];
	int sum = 0;
	for (int i = 0; i < n; i++){
		cin >> coins[i];
		sum += coins[i];
	}
	sort(coins, coins + n);
	int count = 0;
	int tempsum = 0;
	for (int i = n - 1; i >= 0; i--){
		if (tempsum <= sum - tempsum){
			tempsum += coins[i];
			count ++;
		}
	}

	cout << count;
}