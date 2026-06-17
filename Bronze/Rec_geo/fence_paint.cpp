#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("paint");
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	// When the lines overlap each other
	if((c >= a && d <= b) || (a >= c && b <= d) ||
		(c >= a && c <= b && b >= c && b <= d) ||
		(a >= c && a <= d && d >= a && a <= b)){
			cout << max(b, d) - min(a, c);
		}
	// When the lines have no common point
	else{
		cout << (b - a) + (d - c);
	}
}
