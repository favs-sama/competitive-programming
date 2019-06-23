# include <bits/stdc++.h>
using namespace std;
int main(){
	map<string, int>part;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		int a;
		cin >> a;
		if (i % 3 == 1){
			part["chest"] += a;
		} else if (i % 3 == 2){
			part["biceps"] += a;
		} else{
			part["back"] += a;
		}
	}
	int best = 0;
	for (auto it : part){
		best = max(best, it.second);
	}
	for (auto it : part){
		if (it.second == best){
			cout << it.first;
			break;
		}
	}
}