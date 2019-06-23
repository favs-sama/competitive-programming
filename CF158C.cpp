# include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<string>directory;
	cin >> n;
	while (n--){
		string command;
		cin >> command;
		if (command == "pwd"){
			cout << "/";
			for (int i = 0; i < directory.size(); i++)
				cout << directory[i] << "/";
			cout << endl;

		} else if (command == "cd"){
			string parameter;
			cin >> parameter;
			parameter += "/";	
			if (parameter[0] == '/')
				directory.clear();
			int pos = 0;
			string token;
			while ((pos = parameter.find('/')) != string::npos){
				token = parameter.substr(0, pos);
				if (token == "..")
					directory.pop_back();
				else if (token != "")
					directory.push_back(token);
				parameter.erase(0, pos + 1);
			}
		}
	}
}