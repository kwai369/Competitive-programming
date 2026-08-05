#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll s = 0, m = INT_MIN;
	for(int i = 0; i < n; i++){
		ll x;
		cin >> x;
		s += x;
		m = max(x, m);
	}
	cout << max(s, 2*m);
	return 0;
}
