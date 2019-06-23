# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string curr;
	int sets = 0;
	for (int i = 0; i < n; i++){
		string a;
		cin >> a;
		if (i == 0){
			curr = a;
			sets ++;
		} else{
			if (a != curr){
				sets++;
				curr = a;
			}
		}
	}

	cout << sets;
}