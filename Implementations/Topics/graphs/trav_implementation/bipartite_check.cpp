/**
  * Description : Checks whether the graph is bipartite or not.
  * Source : USACO guide.
  * Verification : https://cses.fi/problemset/task/1668
  */

#include <bits/stdc++.h>
using namespace std;

const int mn = 1e5+10;

int n,m;
bool vis[mn],group[mn],bad;
vector<int> v[mn];

void dfs(int j,bool g){
	vis[j] = true;
	group[j] = g;
	for(int adj : v[j]){
		if(vis[adj]){
			if(group[adj]==g){
				bad = 1;
			}
		}
		else{
			dfs(adj,!g);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		v[--a].push_back(--b);
		v[b].push_back(a);
	}
	for(int i=0;!bad && i<n;i++){
		if(!vis[i]){	
			dfs(i,0);
		}
	}
	if(bad){
		cout << "IMPOSSIBLE\n";
	}
	for(int i=0;i<n;i++){
		cout << group[i]+1 << " ";
	}
}
