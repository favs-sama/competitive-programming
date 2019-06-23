# include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	vector<char>s;
	int count = 0;
	for (int i = 0; i < a.length(); i++){
		if (a[i] == '['){
			s.push_back(a[i]);
		} else if (a[i] == ']' && s.back() == '['){
			s.push_back(a[i]);
			count++;
		} else{
			s.push_back(a[i]);
		}
	}
	cout << count << endl;
	if (!s.empty()){
		for (int i = 0; i < s.size(); i++)
			cout << s[i];
	}
}