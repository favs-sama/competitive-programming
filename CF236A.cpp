# include <bits/stdc++.h>
using namespace std;
int main(){
	string word;
	cin >> word;
	sort(word.begin(), word.end());
	string res = "";
	for (int i = 0; i < word.length(); i++){
		if (word[i] != res[res.length() -1])
			res = res + word[i];
	}

	if (res.length() % 2 == 0)
		cout << "CHAT WITH HER!";
	else 
		cout << "IGNORE HIM!";
}