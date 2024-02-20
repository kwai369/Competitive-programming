#include <bits/stdc++.h>
using namespace std;


void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("cowqueue");
	int n;
	cin >> n;
	vector<pair<int,int>> vec(n);
	for(auto& i : vec){
		cin >> i.first >> i.second;
	}
	sort(vec.begin(),vec.end());
	int pro = 0;
	for(int i=0;i<n;i++){
		if(vec[i].first < pro){
			pro += vec[i].second;
		}
		else{
			pro = vec[i].first + vec[i].second;
		}
	}
	cout << pro;
}
