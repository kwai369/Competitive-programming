/* http://www.usaco.org/index.php?page=viewproblem2&cpid=616 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("cbarn");
	int n;
	cin >> n;
	vector<int> vec(n);
	int total = 0;
	for(int i=0;i<n;i++){
		cin >> vec[i];
		total += vec[i];
	}
	int m_d = INT32_MAX;
	for(int i=0;i<n;i++){
		int d = 0,c_d = total;
		for(int j = 0;j<n;j++){
			c_d -= vec[(i+j) % n];
			d += c_d;
		}
		m_d = min(d,m_d);
	}
	cout << m_d;
}