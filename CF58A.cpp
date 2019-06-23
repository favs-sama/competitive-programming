# include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	string res = "";
	for (int i = 0; i < a.length(); i++){
		if (res == ""){
			if (a[i] == 'h')
				res = res + a[i];
		}else{
			if (res == "h" && a[i] == 'e')
				res = res + a[i];
			else if (res == "he" && a[i] == 'l')
				res = res + a[i];
			else if (res == "hel" && a[i] == 'l')
				res = res + a[i];
			else if (res == "hell" && a[i] == 'o'){
				res = res + a[i];
				break;
			}
		}
	}

	if (res == "hello")
		cout << "YES";
	else 
		cout << "NO";
}