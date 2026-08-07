#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n), b(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		int sum = 0, maxi = 0, ans = 0;
		for(int i = 0; i < n && k > 0; i++){
			sum += a[i];
			k--;
			maxi = max(maxi, b[i]);
			ans = max(sum+(maxi*k), ans);
		}
		cout << ans << "\n";
	}
	return 0;
}
