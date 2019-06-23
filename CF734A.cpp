# include <bits/stdc++.h>
using namespace std;
map<char, int> games;
int main(){
	int N;
	cin >> N;
	string a;
	cin >> a;
	for (int i = 0; i < N; i++){
		games[a[i]] ++;
	}
	if (games['A'] > games['D'])
		cout << "Anton\n";
	else if (games['A'] < games['D'])
		cout << "Danik\n";
	else
		cout << "Friendship\n";
}