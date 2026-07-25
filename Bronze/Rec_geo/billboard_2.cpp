#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

struct Rectangle{
	int x1, y1, x2, y2;
	int area(){
		return (x2 - x1) * (y2 - y1);
	}
};

Rectangle inter(Rectangle l, Rectangle f){
	Rectangle c;
	c.x1 = max(l.x1, f.x1);
	c.x2 = min(l.x2, f.x2);
	c.y1 = max(l.y1, f.y1);
	c.y2 = min(l.y2, f.y2);
	return c;
}

bool check(Rectangle r, int x, int y){
	return x >= r.x1 && x <= r.x2 && y >= r.y1 && y <= r.y2;
}

int main() {
	setIO("billboard");
	Rectangle lawn, feed;
	cin >> lawn.x1 >> lawn.y1 >> lawn.x2 >> lawn.y2;
	cin >> feed.x1 >> feed.y1 >> feed.x2 >> feed.y2;
	Rectangle common = inter(lawn, feed);
	int corners = 0;
	if(check(feed, lawn.x1, lawn.y1)) corners++;
	if(check(feed, lawn.x2, lawn.y2)) corners++;
	if(check(feed, lawn.x2, lawn.y1)) corners++;
	if(check(feed, lawn.x1, lawn.y2)) corners++;
	if(corners == 4){
		cout << 0;
	}
	else if(corners == 2){
		cout << lawn.area() - common.area();
	}
	else{
		cout << lawn.area();
	}
	return 0;
}
