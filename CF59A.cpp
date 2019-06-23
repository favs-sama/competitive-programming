# include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int upCount = 0;
	for (int i = 0; i < a.length(); i++){
		if (a[i] == toupper(a[i]))
			upCount ++;
	}
	string buff = "";
	if (upCount > a.length() - upCount){
		for (int i = 0; i < a.length(); i++)
			buff += toupper(a[i]);
	} else{
		for (int i = 0; i < a.length(); i++)
			buff += tolower(a[i]);
	}

	cout << buff;
}