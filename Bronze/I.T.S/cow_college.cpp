#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool comp(pair<ll,ll> a,pair<ll,ll> b){
	if(a.first != b.first){
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main(){
	int n;
	cin >> n;
	vector<ll> tui(n+1);
	for(int i=1;i<n+1;i++){
		cin >> tui[i];
	}
	sort(tui.begin()+1,tui.end());
	vector<pair<ll,ll>> vec(n+1);
	for(int i=1;i<n+1;i++){
		int fea = (n-i) + 1;
		vec[i].first = (tui[i] * fea);
		vec[i].second = tui[i];
	}
	sort(vec.begin(),vec.end(),comp);
	cout << vec[n].first << " " << vec[n].second;
}
