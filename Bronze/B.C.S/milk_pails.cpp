#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("pails");
	int x,y,m;
	cin >> x >> y >> m;
	int max_x = round(m/x);
	int max_y = round(m/y);
	int app = 1e9;
	for(int i=0;i<=max_x;i++){
		for(int j=0;j<=max_y;j++){
			int add = (x*i) + (y*j);
			if(add > m){
				continue;
			}
			app = min(app,m-add);
		}
	}
	cout << m-app;
}
