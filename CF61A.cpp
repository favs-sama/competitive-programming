# include <bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	string buffer = "";
	for (int i = 0; i < a.length(); i++){
		if (a[i] == b[i])
			buffer += "0";
		else 
			buffer += "1";
	}
	cout << buffer;
}