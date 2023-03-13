/* http://www.usaco.org/index.php?page=viewproblem2&cpid=567 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("paint");
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int total = (b-a) + (d-c);
	int ints = max(min(b,d)-max(a,c),0);
	cout << total - ints;
}

