# include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
	if (num < 2) return false;
	int h = sqrt(num);
	for (int i = 2; i <= h; i++){
		if (num % i == 0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	for (int i = n / 2 + 1; i <= n; i++){
		if (i + (n - i) == n){
			if (!isPrime(i) && !isPrime(n - i))
			{
				cout << min(i, n - i) << " " << max(n - i, i);
				break;
			}
		}
	}
}