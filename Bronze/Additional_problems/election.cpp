#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	auto check = [](const int &x, const int &y, const int &z){
		return max(0, max(y, z) + 1 - x);
	};
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		cout << check(a, b, c) << " " << check(b, a, c) << " " << check(c, b, a) << "\n";
	}
	return 0;
}
