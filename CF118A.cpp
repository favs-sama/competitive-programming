# include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin >> a;
	string result = "";
	for (int i = 0; i < a.length(); i++){
		char temp = tolower(a[i]);
		if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' || temp == 'y')
			result = result;
		else{
			result = result + "." + temp;
		}
	}

	cout << result;
}