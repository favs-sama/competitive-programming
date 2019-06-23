# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int in, best, worst;
	int amazing = 0;
	for (int i = 0; i < n; i++){
		if (i == 0){
			cin >> in;
			best = in;
			worst = in;
		} else{
			cin >> in;
			if (in > best){
				best = in;
				amazing ++;
			} else if (in < worst){
				worst = in;
				amazing ++;
			}
		}
	}

	cout << amazing << "\n";	
}