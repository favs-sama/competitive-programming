# include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin, a);
	set<char>letters;
	for (int i = 0; i < a.length(); i++){
		if (isalpha(a[i]))
			letters.insert(a[i]);
	}

	cout << letters.size();
}