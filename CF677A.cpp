# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, h, a;
	cin >> n >> h;
	int count = 0;
	while (n--){
		cin >> a;
		if (a > h)
			count += 2;
		else
			count ++;
	}
	cout << count;
}