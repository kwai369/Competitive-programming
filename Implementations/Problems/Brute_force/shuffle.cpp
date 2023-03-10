/* http://www.usaco.org/index.php?page=viewproblem2&cpid=760 */

#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int A[MAX+1];
int order[MAX+1];
int original_ord[MAX+1];

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("shuffle");
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> A[i];
	}
	for(int i=1;i<=n;i++){
		cin >> order[i];
	}
	for(int i = 0;i<3;i++){
		for(int j=1;j<=n;j++){
			original_ord[j] = order[A[j]];
		}
		for(int j=1;j<=n;j++){
			order[j] = original_ord[j];
		}
	}
	for(int i=1;i<=n;i++){
		cout << order[i] << "\n";
	}
}