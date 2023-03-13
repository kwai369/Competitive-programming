/* http://www.usaco.org/index.php?page=viewproblem2&cpid=639 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("diamond");
	int n,k;
	cin >> n >> k;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}
	int maxi = 0;
	for(int i=0;i<n;i++){
		int f = 0;
		for(int j=0;j<n;j++){
			if(vec[i]<=vec[j] && vec[j]<=vec[i]+k){
				f++;
			}
		}
		maxi = max(maxi,f);
	}
	cout << maxi;
}