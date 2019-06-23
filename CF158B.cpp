# include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int group[n];
	int taxi = 0;
	bool visited[n];
	memset(visited, false, n);
	for (int i = 0; i < n; i++) { cin >> group[i]; }
	sort(group, group + n);
	for (int i = n - 1; i >= 0; i--){
		if (visited[i])
			break;
		else{
			bool taxiFull = false;
			visited[i] = true;
			if (group[i] % 4 == 0)
				taxiFull = true;
			else{
				int temp = group[i];
				for (int j = 0; j < n; j++){
					if (visited[j])
						continue;
					else{
						if (temp + group[j] == 4){
							visited[j] = true;
							temp += group[j];
							taxiFull = true;
							break;
						} else if (temp + group[j] < 4){
							visited[j] = true;
							temp += group[j];
							continue;
						} else{
							break;
						}
					}
				}
				taxiFull = true;
			}
			if (taxiFull)
				taxi++;
		}
	}

	cout << taxi;
}