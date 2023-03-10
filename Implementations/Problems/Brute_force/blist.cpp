/* http://www.usaco.org/index.php?page=viewproblem2&cpid=856 */

#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int S[MAX+1];
int T[MAX+1];
int B[MAX+1];

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("blist");
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> S[i] >> T[i] >> B[i];
	}
	int maxi = 0;
	for(int t=1;t<=1000;t++){
		int max_buc = 0;
		for(int i=0;i<n;i++){
			if(S[i]<=t && t<=T[i]){
				max_buc += B[i];
			}
		}
		maxi = max(maxi,max_buc);
	}
	cout << maxi;
}