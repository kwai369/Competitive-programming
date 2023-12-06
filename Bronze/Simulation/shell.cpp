#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("shell");
	vector<int> vec(3);
	int n;
	cin >> n;
	int a[n],b[n],g[n];
	vec[0] = 1;
	int ans = 0,maxi = 0;
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i] >> g[i];
		a[i]--,b[i]--,g[i]--;
		swap(vec[a[i]],vec[b[i]]);
		if(vec[g[i]]){
			ans++;
		}
	}
	maxi = max(maxi,ans);
	vec[1] = 1,vec[0] = 0,vec[2] = 0,ans = 0;
	for(int i=0;i<n;i++){
		swap(vec[a[i]],vec[b[i]]);
		if(vec[g[i]]){
			ans++;
		}
	}
	maxi = max(maxi,ans);
	vec[2] = 1,vec[1] = 0,vec[0] = 0,ans = 0;
	for(int i=0;i<n;i++){
		swap(vec[a[i]],vec[b[i]]);
		if(vec[g[i]]){
			ans++;
		}
	}
	cout << max(maxi,ans);
}
