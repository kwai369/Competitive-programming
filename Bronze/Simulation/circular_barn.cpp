#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	 setIO("cbarn");
	 int n;
	 cin >> n;
	 vector<int> v(n);
	 for (int i = 0; i < n; ++i){
	 	cin >> v[i];
	 }
	 int ans = INT_MAX;
     for (int i = 0; i < n; ++i){
     	int maxi = 0;
     	for (int j = 0; j < n; ++j){
     		maxi += (v[j]*j);
     	}
     	ans = min(ans,maxi);
     	v.push_back(v[0]);
     	v.erase(v.begin());
     }
     cout << ans;
}
