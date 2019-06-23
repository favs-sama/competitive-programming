# include <bits/stdc++.h>
using namespace std;

string reverse(string word){
	string res = "";
	for (int i = word.length() - 1; i >= 0; i--)
		res = res + word[i];
	return res;
}

int main(){
	string a, b;
	cin >> a >> b;
	string c = reverse(a);
	if (c == b)
		cout << "YES";
	else
		cout << "NO";
}