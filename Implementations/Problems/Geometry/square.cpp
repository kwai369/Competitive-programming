/* http://www.usaco.org/index.php?page=viewproblem2&cpid=663 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("square");
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	int left = min(x1,x3),right = max(x2,x4);
	int top = max(y2,y4),bottom = min(y1,y3);
	int side = max(right-left,top-bottom);
	cout << side * side;
}

