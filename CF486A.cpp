# include <bits/stdc++.h>
using namespace std;
int main(){
	long long number;
	long long result;
	cin >> number;
	if (number % 2 == 0){
		long long n = number / 2;
		result = n * ((number + 2) / 2);
		result += n * ((-(number - 1) -1) / 2);
		cout << result;
	} else{
		long long n = (number - 1) / 2;
		long long odd = n + 1;
		result = odd * ((-number - 1) / 2);
		result += n * ((number - 1 + 2) / 2);
		cout << result;
	}
}