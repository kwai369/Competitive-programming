// Solution 1: It's a basic(not brute force) approach. It's correct, but solution 2 is much simpler and easier to understand.
// Note: Both solutions work. But the difference is implementation.

// Solution 1:
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("billboard");
	vector<int> b1(4), b2(4), t(4);
	cin >> b1[0] >> b1[1] >> b1[2] >> b1[3];
	cin >> b2[0] >> b2[1] >> b2[2] >> b2[3];
	cin >> t[0] >> t[1] >> t[2] >> t[3];
	int total = 0;
	int area_b1 = (b1[2] - b1[0]) * (b1[3] - b1[1]);
	int area_b2 = (b2[2] - b2[0]) * (b2[3] - b2[1]);
	if(b1[0] >= t[2] || b1[1] >= t[3] || t[0] >= b1[2] || t[1] >= b1[3]){
		total += area_b1;
	}
	else{
		vector<int> sort_x = {b1[0], b1[2], t[0], t[2]};
		vector<int> sort_y = {b1[1], b1[3], t[1], t[3]};
		sort(sort_x.begin(), sort_x.end());
		sort(sort_y.begin(), sort_y.end());
		int overlap = (sort_x[2] - sort_x[1]) * (sort_y[2] - sort_y[1]);
		area_b1 -= overlap;
		total += area_b1;
	}
	if(b2[0] >= t[2] || b2[1] >= t[3] || t[0] >= b2[2] || t[1] >= b2[3]){
		total += area_b2;
	}
	else{
		vector<int> sort_x = {b2[0], b2[2], t[0], t[2]};
		vector<int> sort_y = {b2[1], b2[3], t[1], t[3]};
		sort(sort_x.begin(), sort_x.end());
		sort(sort_y.begin(), sort_y.end());
		int overlap = (sort_x[2] - sort_x[1]) * (sort_y[2] - sort_y[1]);
		area_b2 -= overlap;
		total += area_b2;
	}
	cout << total << "\n";
	return 0;
}

// Solution 2:
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
