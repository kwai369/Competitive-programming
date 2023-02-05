/* http://www.usaco.org/index.php?page=viewproblem2&cpid=615 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("pails.in","r",stdin);
	freopen("pails.out","w",stdout);
	int x,y,m;
	cin >> x >> y >> m;
	int ans = 0;
	for(int x1 = 0;x1*x<=m;x1++){
		for(int y1 = 0;(x1*x)+(y1*y)<=m;y1++){
			if((x1*x)+(y1*y)>ans){
				ans = (x1*x)+(y1*y);
			}
		}
	}
	cout << ans;
}
