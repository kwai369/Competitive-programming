#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("whereami");
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=1;i<=n;i++){
		set<string> uni;
		for(int j=0;j<(n-i)+1;j++){
			uni.insert(s.substr(j,i));
		}
		if(int(uni.size()) == (n-i)+1){
			cout << i;
			break;
		}
	}
}
