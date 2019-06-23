# include <bits/stdc++.h>
using namespace std;
int main(){
	int pos;
	string names[6] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cin >> pos;
	int mult = 1;
	while (mult * 5 < pos){
		pos -= (mult * 5);
		mult *= 2;
	}
	cout << names[(pos - 1) / mult];
}