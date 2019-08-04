#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> directory;
    
    int n;
    string name;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> name;
        if (directory[name] == 0)
        {
            cout << "OK" << endl;
            directory[name] = 1;
        }
        else
        {
            cout << name << directory[name] << endl;
            string res = name + to_string(directory[name]);
            directory[res] = 1;
            directory[name]++;
        }
    }
}