# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int puzzles[m];
	for (int i = 0; i < m; i++) { cin >> puzzles[i]; }
	sort(puzzles, puzzles + m);
	int minDiff = INT_MAX;
	for (int i = 0; i <= m - n; i++){
		minDiff = min(minDiff, puzzles[i + n - 1] - puzzles[i]);
	}
	cout << minDiff;
}