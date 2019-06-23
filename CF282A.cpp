# include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin >> q;
	int sum = 0;
	while (q--){
		string s;
		cin >> s;
		if (s.find("++") != string::npos)
			sum ++;
		else
			sum --;
	}

	cout << sum;
}