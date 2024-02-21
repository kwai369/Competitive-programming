#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("blist");
	int n;
	cin >> n;
	vector<int> vec(1001);
	for(int i=0;i<n;i++){
		int s,t,b;
		cin >> s >> t >> b;
		vec[s] = b;
		vec[t] = -b;
	}
	int ans = 0,cur = 0;
	for(int i=1;i<1001;i++){
		cur += vec[i];
		ans = max(cur,ans);
	}
	cout << ans;
}
