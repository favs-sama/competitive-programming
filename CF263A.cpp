# include <bits/stdc++.h>
using namespace std;
int matrix[6][6];
int main(){
	int moves;
	for (int i = 1; i < 6; i++)
		for (int j = 1; j < 6; j++){
			cin >> matrix[i][j];
			if (matrix[i][j] == 1){
				int a = i;
				int b = j;
				moves = fabs(3-a) + fabs(3-b);
			}
		}

	cout << moves;
}