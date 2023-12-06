#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("mixmilk");
	int n = 3,cyc = 100;
	vector<int> cap(n);
	vector<int> milk(n);
	for(int i=0;i<n;i++){
		cin >> cap[i] >> milk[i];
	}
	for(int i=0;i<cyc;i++){
		int b1 = i%n;
		int b2 = (i+1)%n;
		int mix = min(milk[b1],cap[b2]-milk[b2]);
		milk[b1] -= mix;
		milk[b2] += mix;
	}
	cout << milk[0] << "\n" << milk[1] << "\n" << milk[2]; 
}
