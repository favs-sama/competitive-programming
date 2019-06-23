# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int num[n + 1];
	int indexeven, indexodd;
	int counteven = 0, countodd = 0;
	for (int i = 1; i <= n; i++){
		cin >> num[i];
		if (num[i] % 2 == 0){
			indexeven = i;
			counteven++;
		} else{
			indexodd = i;
			countodd++;
		}
	}

	cout << (countodd < counteven ? indexodd : indexeven);
}