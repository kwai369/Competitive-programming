#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	for (int i = 0; i < n; ++i){
		cin >> x[i];
	}
	for (int i = 0; i < n; ++i){
		cin >> y[i];
	}
	int ans = INT_MIN;
	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			int a = (x[j] - x[i]) * (x[j] - x[i]);
			int b = (y[j] - y[i]) * (y[j] - y[i]);
			ans = max(ans, a+b);
		}
	}
	cout << ans;
}
