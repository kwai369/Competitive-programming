#include<bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("notlast");
	vector<string> vec = {"Bessie", "Elsie", "Annabelle", "Daisy",
	"Henrietta", "Gertie", "Maggie"};
	int n;
	cin >> n;
	map<string, int> mp;
	for(auto i : vec){
		mp[i];
	}
	for(int i = 0; i < n; i++){
		string s;
		int x;
		cin >> s >> x;
		mp[s] += x;
	}
	multiset<int> log;
	for(auto& i : mp){
		log.insert(i.second);
	}
	auto it = log.begin();
	auto x = log.upper_bound(*it);
	if(x == log.end() || log.count(*x) > 1){
		cout << "Tie\n";
	}
	else{
		for(auto& i : mp){
			if(i.second == *x){
				cout << i.first << "\n";
				return 0;
			}
		}
	}
}
