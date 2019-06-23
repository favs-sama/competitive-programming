# include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int luckyCount = 0;
	for (int i = 0; i < a.length(); i++){
		if (a[i] == '7' || a[i] == '4')
			luckyCount ++;
	}
	if (luckyCount == 4 || luckyCount == 7)
		cout << "YES";
	else 
		cout << "NO";
}