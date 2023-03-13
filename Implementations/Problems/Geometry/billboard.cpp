/* http://www.usaco.org/index.php?page=viewproblem2&cpid=759 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

struct Rect{
	int x1,x2,y1,y2;
	int area(){
		return (y2-y1) * (x2-x1);
	}
};

int ints(Rect x,Rect y){
	int x_ints = max(min(x.x2,y.x2)-max(x.x1,y.x1),0);
	int y_ints = max(min(x.y2,y.y2)-max(x.y1,y.y1),0);
	return x_ints*y_ints;
}

int main() {
	setIO("billboard");
	Rect a,b,c;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;
	cout << a.area() + b.area() - ints(a,c) - ints(b,c);
}

