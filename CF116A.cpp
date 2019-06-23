# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int best = 0;

	int capacity = 0;
	while (n--){
		int exit, enter;
		cin >> exit >> enter;
		capacity = (capacity - exit) + enter;
		best = max(best, capacity);
	}
	cout << best << endl;
}