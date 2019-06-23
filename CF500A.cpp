# include <bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
bool visited[100001];
void dfs(int i){
	visited[i] = true;
	for (int j = 0; j < adj[i].size(); j++)
		dfs(adj[i][j]);
}
int main(){
	int N, target, portal;
	cin >> N >> target;
	for (int i = 1; i <= N - 1; i++){
		cin >> portal;
		int u = i;
		int v = i + portal;
		adj[u].push_back(v);
	}
	dfs(1);
	cout << (visited[target] ? "YES" : "NO");
}