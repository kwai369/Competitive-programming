#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("notlast");
	vector<string> cows{"Bessie","Elsie","Daisy","Gertie","Annabelle","Maggie","Henrietta"};
	map<string,int> mp;
	for(int i=0;i<7;i++){
		mp[cows[i]] = 0;
	}
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		int x;
		cin >> s >> x;
		mp[s] += x;
	}
	set<int> s;
	multiset<int> ms;
	for(auto &x : mp){
		s.insert(x.second);
		ms.insert(x.second);
	}
	 
	if(int(s.size()) == 1){
		cout << "Tie\n";
		return 0;
	}
	auto it = s.begin();
	it++;
	int second = *it;
	if(ms.count(second) > 1){
		cout << "Tie\n";
	}
	else{
		for(auto &x : mp){
			if(x.second == second){
				cout << x.first << "\n";
			}
		}
	}
}
