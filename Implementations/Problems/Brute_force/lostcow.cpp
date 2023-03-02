/* http://www.usaco.org/index.php?page=viewproblem2&cpid=735 */

#include<bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("lostcow");
	int x,y;
	cin >> x >> y;
	vector<int> zigzag;
	if(x==y){
		cout << 0;
	}
	else if(x<y){
		int dist = 1;
		while(x+dist<y){
			zigzag.push_back(x+dist);
			dist *= -2;
		}
		zigzag.push_back(x+dist);
		int ans = 1;
		for(int i=0;i<int(zigzag.size())-1;i++){
			ans += abs(zigzag[i]-zigzag[i+1]);
		}
		ans -= (zigzag[int(zigzag.size())-1] - y);
		cout << ans;
	}
	else{
		int dist = 1;
		while(x+dist>y){
			zigzag.push_back(x+dist);
			dist *= -2;
		}
		zigzag.push_back(x+dist);
		int ans = 1;
		for(int i=0;i<int(zigzag.size())-1;i++){
			ans += abs(zigzag[i]-zigzag[i+1]);
		}
		ans -= (y - zigzag[int(zigzag.size())-1]);
		cout << ans;
	}
}
