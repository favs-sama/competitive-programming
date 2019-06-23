# include <bits/stdc++.h>
using namespace std;
int main(){
	string a, delimiter;
	cin >> a;
	vector<string>words;
	delimiter = "WUB";
	string token;
	int pos = 0;
	while ((pos = a.find(delimiter)) != string::npos){
		token = a.substr(0, pos);
		if (token != "")
			words.push_back(token);
		a.erase(0, pos + delimiter.length());
	}
	if (a != "")
		words.push_back(a);
	for (int i = 0; i < words.size(); i++)
		cout << words[i] << " ";
	
}