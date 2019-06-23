# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--){
		string word;
		cin >> word;
		int length = word.length();
		if (length > 10){
			string abb = word[0] + to_string(length - 2) + word[length - 1];
			cout << abb << endl;
		}
		else
			cout << word << endl;
	}
}