#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("speeding");
	vector<int> road(100);
	vector<int> bess(100);
	int n,m,len = 0;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		for(int j=len;j<len+a;j++){
			road[j] = b;
		}
		len += a;
	}
	len = 0;
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		for(int j=len;j<len+a;j++){
			bess[j] = b;
		}
		len += a;
	}
	int maxi = 0; 	 
	for(int i=0;i<100;i++){
		maxi = max(maxi,bess[i]-road[i]);
	}
	cout << maxi;
}
