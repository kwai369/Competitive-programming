#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;
	ll x;
	cin >> n >> x;
	vector<ll> vec(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}
	int ans = 0;
	map<ll,ll> mp;
	for(int i=0;i<n;i++){
		if(mp.count(x - vec[i])){
			ans++;
			cout << i+1 << " " << mp[x - vec[i]];
			break;
		}
		mp[vec[i]] = i+1;
	}
	if(ans == 0){
		cout << "IMPOSSIBLE";
	}
}
