# include <bits/stdc++.h>
using namespace std;
int main(){
	long n, newNum = 0;
	cin >> n;
	string num = to_string(n);
	long best = n;
	if (n < 0){
		string fin = "";
		for (int i = 1; i < num.length(); i++)
			if (i == num.length() - 2)
				continue;
			else
				fin = fin + num[i];
		newNum = stoi(fin) * -1;
		best = max(newNum, n / 10);
	}
	
	cout << best << "\n";
}