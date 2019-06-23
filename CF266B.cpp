# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, time;
	cin >> n >> time;
	string line;
	cin >> line;
	string res = "";
	while (time--){
		char front;
		for (int i = 0; i < n; i++){
			if (i == 0){
				front = line[i];
				res = res + line[i];
			} else{
				if (front == 'B' && line[i] == 'G'){
					res[res.length() - 1] = 'G';
					res = res + 'B';
					front = '\0';
				} else{
					front = line[i];
					res = res + line[i];
				}
			}
		}
		line = res;
		res = "";
	}

	cout << line;
}