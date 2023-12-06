#include <bits/stdc++.h>
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
	int dis = 1,mul = 1,fac = -2,n,o;
	if(x+1 == y){
		cout << dis;
	}
	else{
		o = x+1;
		while(1){	
			n = x + (mul*fac);
			dis += abs(o - n);
			if((n <= y && y < o) || (o < y && y <= n)){
				dis -= (abs(n-y));
				break;
			}
			o = n;
			mul *= fac;
		}
		cout << dis;
	}
}
