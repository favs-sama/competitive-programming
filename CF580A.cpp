# include <bits/stdc++.h>
using namespace std;
int main() {
	//to do get the maximum
	int n;
	cin >> n;
	int arr[n];
	int ArrLength;
	int maxArrLength = 0;
	int prev;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	for (int i = 0; i < n; i++){
		if (i == 0){
			prev = arr[i];
			ArrLength = 1;
		} else{
			if (arr[i] >= prev){
				prev = arr[i];
				ArrLength++;
			} else{
				ArrLength = 1;
				prev = arr[i];
			}
		}
		maxArrLength = max(maxArrLength, ArrLength);
	}
	cout << maxArrLength;
}