/* http://www.usaco.org/index.php?page=viewproblem2&cpid=593 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("censor");
	string s,t;
	cin >> s >> t;
	string c;
	for(int i=0;i<s.size();i++){
		c += s[i];
		if(c.size()>t.size() && c.substr(c.size()-t.size())==t){
			c.resize(c.size()-t.size());
		}
	}
	cout << c;
}
