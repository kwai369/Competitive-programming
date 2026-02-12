#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("pails");
    int x, y, m;
	cin >> x >> y >> m;
	int x_max = m/x;
	int y_max = m/y;
	int ans = INT_MAX;
	for(int i = 0; i <= x_max; i++){
		for(int j = 0; j <= y_max; j++){
			int l_h_s = (x*i) + (y*j);
			if(l_h_s <= m){
				ans = min(ans, m - l_h_s);
			}
		}
	}
	cout << m - ans << endl;
	return 0;
}
