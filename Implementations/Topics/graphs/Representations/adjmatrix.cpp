/**
 * Description : Representation of graph through adjacency matrix.
 * Source : USACO guide.
 */

int n, m; 
int adj[MAXN][MAXN]; 

int main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){ 
		int a, b;
		cin >> a >> b;
		a--; b--; 
		adj[a][b] = 1; 
		adj[b][a] = 1; 
	}
	return 0;
}
