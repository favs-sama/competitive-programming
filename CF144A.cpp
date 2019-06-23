# include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	int s, maximum, minimum;
	int maxind, minind;
	for (int i = 1; i <= a; i++){
		if (i == 1){
			cin >> s;
			minimum = s;
			maximum = s;
			maxind = i;
			minind = i;
		} else{
			cin >> s;
			if (s > maximum){
				maximum = s;
				maxind = i;
			} else if (s <= minimum){
				minimum = s;
				minind = i;
			}
		}
	}
	if (minind < maxind)
		cout << maxind + (a - 1 - minind) - 1;
	else 
		cout << maxind + (a - 1 - minind);
}