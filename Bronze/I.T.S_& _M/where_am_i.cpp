#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("whereami");
	int n;
	cin >> n;
	string st;
	cin >> st;
	for(int i = 1; i <= n; i++){
		set<string> s;
		for(int j = 0; (j + i) - 1 < n; j++){
			s.insert(st.substr(j, i));
		}
		if(int(s.size()) == (n - i) + 1){
			cout << i;
			return 0;
		}
	}
}
