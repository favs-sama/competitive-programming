# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while (true){
		cin >> n;
		if (n == 0) break;
		int trains[n];
		while (true){
			cin >> trains[0];
			if (trains[0] == 0) break;
			for (int i = 1; i < n; i++){
				cin >> trains[i];
			}
			int j = 0;
			int iter = 1;
			stack<int> station;
			while (iter <= n){
				station.push(iter);
				while (!station.empty() && station.top() == trains[j]){
					station.pop();
					j++;
					if (j > n - 1)
						break;
				}
				iter++;
			}

			cout << (station.empty() ? "YES\n" : "NO\n");
		}
	}
}