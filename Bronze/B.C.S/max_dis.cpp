#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	int n;
	cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	for(int i=0;i<n;i++){
		cin >> x[i];
	}
	for(int i=0;i<n;i++){
		cin >> y[i];
	}
	int maxi = 0; 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			maxi = max(maxi,(x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
		}
	}
	cout << maxi;
}
