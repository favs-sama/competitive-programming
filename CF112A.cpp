# include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	string c = "", d = "";
	for (int i = 0; i < a.length(); i++){ c += tolower(a[i]);}
	for (int i = 0; i < b.length(); i++){ d += tolower(b[i]);}
	if (string(c) > string(d))
		cout << "1";
	else if (string(c) < string(d))
		cout << "-1";
	else
		cout << "0";
}