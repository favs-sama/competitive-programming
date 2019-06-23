# include <iostream>
using namespace std;
int main(){
	string a;
	cin >> a; 
	bool valid = false;
	if (a.length() > 1)
		for (int i = 1; i < a.length(); i++){
			if (!isupper(a[i])){
				valid = true;
				break;
			}
		}

	if (!valid){
		for (int i = 0; i < a.length(); i++){
			if (isupper(a[i]))
				a[i] = tolower(a[i]);
			else
				a[i] = toupper(a[i]);
		}
	}

	cout << a;
}