/**
 * Description : Representation of graph through edge List.
 * Source : USACO guide.
 */

struct Edge{
	int a,b,w;
	Edge(int start,int end,int weight):
	a(start),b(end),w(weight)
	{
	}
};

int n,m;
vector<Edge> edges;

int main(){
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int a,b,w;
		cin >> a >> b >> w;
		a--,b--;
		edges.push_back(Edge(a,b,w));
	}	
}
