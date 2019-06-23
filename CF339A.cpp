# include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>numbers;
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++){
		if (a[i] == '1' || a[i] == '2' || a[i] == '3'){
			char t = a[i];
			int temp = atoi(&t);
			numbers.push_back(temp);
		}
	}


	sort(numbers.begin(), numbers.end());
	for (int i = 0; i < numbers.size(); i++){
		cout << numbers[i];
		if (i < numbers.size() - 1)
			cout << "+";
	}

}