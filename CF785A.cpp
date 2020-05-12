#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    map<string, int> shape;

    shape["Tetrahedron"] = 4;
    shape["Cube"] = 6;
    shape["Octahedron"] = 8;
    shape["Dodecahedron"] = 12;
    shape["Icosahedron"] = 20;
    
    int n, faces;
    string in;
    
    cin >> n;
    
    faces = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> in;
        faces += shape[in];
    }
    cout << faces;
}