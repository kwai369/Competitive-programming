/* http://www.usaco.org/index.php?page=viewproblem2&cpid=615 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("pails");
	int x,y,m;
	cin >> x >> y >> m;
	int c = 0;
	for(int i=0;i<=m;i++){
		if(x*i>m){
			break;
		}
		for(int j=0;j<=m;j++){
			int n = x*i + y*j;
			if(n>m){
				break;
			}
			c = max(c,n);
		}
	}
	cout << c;
}