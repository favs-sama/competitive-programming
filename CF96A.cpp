# include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	if ((a.find("1111111") != string::npos) || (a.find("0000000") != string::npos))
		cout << "YES";
	else
		cout << "NO";
}