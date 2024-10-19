#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("diamond");
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	int ans = 0;
	for (int i = 0; i < n; ++i){
		int count = 0;
		for(int j = 0; j < n; ++j){
			if(v[i] <= v[j] && v[j] <= v[i]+k){
				count++;
			}
		}
		ans = max(ans,count);
	}
	cout << ans;
}
