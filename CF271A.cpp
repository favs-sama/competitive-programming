# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool beautiful = false;
	n++;
	string num = to_string(n);
	while (!beautiful){	
		set<char> checker (num.begin(), num.end());
		if (checker.size() != num.size()){
			n++;
			num = to_string(n);
		} else
			beautiful = true;
	}
	cout << n;
}