/**
 * Description : Representation of graph through adjacency List .
 * Source : USACO guide.
 */

int n, m; 
vector<int> adj[MAXN]; 

int main(){
	cin >> n; 
	cin >> m; 
	for(int i = 0; i < m; i++){ 
		int a, b;
		cin >> a >> b;
		a--; b--; 
		adj[a].push_back(b);
		adj[b].push_back(a); 
	}
	return 0;
}
