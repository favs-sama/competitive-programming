#include <bits/stdc++.h>

int F[100];

int find(int i, int n){
	for (int j = 1; j <= n; j++)
	{
		if (F[j] == i)
			return j;
	}
}
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> F[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << find(i, n);
		if (i < n)
			cout << " ";
	}
}