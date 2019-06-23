# include <bits/stdc++.h>
using namespace std;
int main(){
	int emp;
	cin >> emp;
	int arr[2001];
	for (int i = 1; i <= emp; i++){
		cin >> arr[i];
	}
	int groups = 0;
	for (int i = 1; i <= emp; i++){
		int temp = 1;
		int boss = arr[i];
		while (boss != -1){
			boss = arr[boss];
			temp ++;
		}
		groups = max(groups, temp);
	}
	cout << groups;
}