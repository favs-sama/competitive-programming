# include <bits/stdc++.h>
using namespace std;
map<char, int> g;
map<char, int> h;
map<char, int> p;
int main(){
	string guest, host, pile;
	cin >> guest >> host >> pile;
	for (int i = 0; i < guest.length(); i++){
		g[guest[i]] ++;
	}
	for (int i = 0; i < host.length(); i++){
		h[host[i]] ++;
	}
	for (int i = 0; i < pile.length(); i++){
		p[pile[i]] ++;
	}
	for (auto it : g){
		if (p[it.first] > 0){
			p[it.first] -= it.second;
			g[it.first] -= it.second;
		}
	}
	int sum = 0;
	for (auto it : h){
		if (p[it.first] > 0){
			p[it.first] -= it.second;
			h[it.first] -= it.second;
		}
	}
	for (auto it : p){
		sum += it.second;
	}
	for (auto it : g){
		sum += it.second;
	}
	for (auto it : h){
		sum += it.second;
	}
	cout << (sum == 0 ? "YES" : "NO");
}