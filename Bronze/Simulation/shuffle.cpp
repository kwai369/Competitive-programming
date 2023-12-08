#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("shuffle");
	int n;
	cin >> n;
	vector<int> ord(n);
	for(auto &i : ord){
		cin >> i;
	}
	vector<int> ids(n);
	for(auto &i : ids){
		cin >> i;
	}
	vector<int> po(n);
	for(int i=0;i<3;i++){
		for(int j=0;j<n;j++){
			po[j] = ids[ord[j]-1];
		}
		ids = po;
	}
	for(auto i : po){
		cout << i << "\n";
	}
}
