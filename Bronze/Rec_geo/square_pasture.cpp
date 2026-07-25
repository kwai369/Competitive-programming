#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("square");
	int b1x, t1x, b1y, t1y, b2x, t2x, b2y, t2y;
	cin >> b1x >> b1y >> t1x >> t1y;
	cin >> b2x >> b2y >> t2x >> t2y;
	int length = max(t1x, t2x) - min(b1x, b2x);
	int width = max(t1y, t2y) - min(b1y, b2y);
	int side = max(length, width);
	cout << side*side;
	return 0;
}
