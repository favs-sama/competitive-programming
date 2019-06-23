# include <bits/stdc++.h>
using namespace std;
set<int> shoes;
int main(){
	int n = 4;
	while (n--){
		int a;
		cin >> a;
		shoes.insert(a);
	}
	cout << 4 - shoes.size() << "\n";
}