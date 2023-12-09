#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("square");
	int a_x1,a_y1,a_x2,a_y2;
	int b_x1,b_y1,b_x2,b_y2;
	cin >> a_x1 >> a_y1 >> a_x2 >> a_y2;
	cin >> b_x1 >> b_y1 >> b_x2 >> b_y2;
	int ans = max(max(a_x2,b_x2) - min(a_x1,b_x1),max(a_y2,b_y2) - min(a_y1,b_y1));
	cout << ans*ans;
}
