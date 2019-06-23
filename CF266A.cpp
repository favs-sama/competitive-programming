# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	char stones[n];
	cin >> stones;

	int neighbor = 0;
	char curr;
	for (int i = 0; i < n; i++){
		if (i == 0){
			curr = stones[i];
			neighbor++;
		}
		else {
			if (curr == stones[i])
				continue;
			else{
				neighbor++;
				curr = stones[i];
			}
		}
	}

	cout << n - neighbor << endl;
}