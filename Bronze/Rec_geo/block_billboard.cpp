#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

struct Rect{
	int x1,y1,x2,y2;
	int area() {
		return (x2 - x1) * (y2 - y1);
	}
};

int intersect(Rect p,Rect q){
	Rect r;
	r.x1 = max(p.x1,q.x1);
	r.y1 = max(p.y1,q.y1);
	r.x2 = min(p.x2,q.x2);
	r.y2 = min(p.y2,q.y2);
	int a = max(0,r.x2 - r.x1);
	int b = max(0,r.y2 - r.y1);
	return a*b;
}

int main(){
	setIO("billboard");
	Rect b1,b2,t;
	cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
	cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
	cout << b1.area() + b2.area() - intersect(b1,t) - intersect(b2,t);
}
