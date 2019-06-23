# include <bits/stdc++.h>
using namespace std;
int main(){
	int x[3];
	for (int i = 0; i < 3; i++)
		cin >> x[i];
	sort(x, x + 3);
	int best = 0;
	for (int i = 1; i < 3; i++)
		best = max(best, x[i] - x[0]);
	cout << best;
}