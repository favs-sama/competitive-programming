# include <bits/stdc++.h>
using namespace std;

int expr1(int a, int b, int c){
	return a + b + c;
}

int expr2(int a, int b, int c){
	return a * b * c;
}

int expr3(int a, int b, int c){
	return (a + b) * c;
}

int expr4(int a, int b, int c){
	return (a * b) + c;
}

int expr5(int a, int b, int c){
	return a * (b + c);
}

int expr6(int a, int b, int c){
	return a + (b * c);
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;	
	int results[6] = {expr1(a, b, c), expr2(a, b, c), expr3(a, b, c), 
					  expr4(a, b, c), expr5(a, b, c), expr6(a, b, c)};
	int best = 0;
	for (int i = 0; i < 6; i++)
		best = max(best, results[i]);
	cout << best;
}