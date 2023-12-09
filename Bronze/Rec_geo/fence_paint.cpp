#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("paint");
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(b<=c || d<=a){
		cout << (b-a) + (d-c);
	}
	else{
		cout << max(d,b) - min(a,c);
	}
}
