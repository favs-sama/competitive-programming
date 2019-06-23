#include  <bits/stdc++.h>

using namespace std;
int main(){
	// 2 is George and Alex
	int n;
	int p, q;
	int count = 0;
	cin >> n;
	while (n--){
		cin >> p >> q;
		if (q - p >= 2)
			count++;
	}
	cout << count;
}