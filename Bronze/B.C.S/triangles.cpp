#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("triangles");
	int n;
	cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				if(y[i] == y[j] && x[k] == x[i]){
					int maxi = abs((x[j] - x[i]) * (y[k] - y[i]));
					ans = max(ans, maxi);
				}
			}
		}
	}
	cout << ans;
}
