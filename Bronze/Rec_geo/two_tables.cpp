#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int W, w, H, h, x1, y1, x2, y2, t;
	cin >> t;
	while(t--){
		cin >> W >> H;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> w >> h;
		int x = INT_MAX, y = INT_MAX;
		if((x2 - x1) + w <= W){
			x = max(0, w - max(x1, W-x2));
		}
		if((y2 - y1) + h <= H){
			y = max(0, h - max(y1, H-y2));
		}
		if(x == INT_MAX && y == INT_MAX){
			cout << -1 << "\n";
		}
		else{
			cout << fixed << setprecision(9) << (double)min(x, y) << "\n";
		}
	}
	return 0;
}
