# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	bool check = true;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (i % 2 != 0){
				cout << "#";
			} else{
				if (check){
					if (j < m){
						cout << ".";
					} else if (j == m){
						cout << "#";
					}
				} else{
					if (j == 1){
						cout << "#";
					} else{
						cout << ".";
					}
				}
			}
			if (j == m && check && i % 2 == 0)
				check = false;
			else if (j == m && !check && i % 2 == 0)
				check = true;
		}
		cout << endl;
	}
}