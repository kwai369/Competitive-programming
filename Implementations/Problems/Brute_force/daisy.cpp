/* http://www.usaco.org/index.php?page=viewproblem2&cpid=1060 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	//setIO("diamond");
	int n;
	cin >> n;
	vector<int> p(n);
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	int v_f = 0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			double avg_flo = 0;
			for(int k=i;k<=j;k++){
				avg_flo += p[k];
			}
			avg_flo /= j-i+1;
			for(int k=i;k<=j;k++){
				if(avg_flo==p[k]){
					v_f++;
					break;
				}
			}
		}
	}
	cout << v_f;
}

