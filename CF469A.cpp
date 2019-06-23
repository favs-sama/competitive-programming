# include <bits/stdc++.h>
using namespace std;
int main(){
	int levels;
	cin >> levels;
	set<int>n;
	int x;
	cin >> x;
	while (x--){
		int temp;
		cin >> temp;
		n.insert(temp);
	}
	int y;
	cin >> y;
	while (y--){
		int temp;
		cin >> temp;
		n.insert(temp);
	}

	if (n.size() < levels)
		cout << "Oh, my keyboard!";
	else 
		cout << "I become the guy.";
}