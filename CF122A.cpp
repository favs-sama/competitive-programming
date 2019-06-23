# include <bits/stdc++.h>
using namespace std;
int main(){
	int lucky[12] = {4, 7, 47, 74, 447, 477, 474, 774, 747, 744, 777, 444};
	int n;
	cin >> n;
	bool luck = false;
	for (int i = 0; i < 12; i++)
		if (n % lucky[i] == 0 | n == lucky[i])
			luck = true;

	if (luck)
		cout << "YES";
	else
		cout << "NO";
}