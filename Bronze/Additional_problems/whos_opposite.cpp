#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		int dis = abs(a - b);
		if(a > dis*2 || b > dis*2 || c > dis*2){
			cout << -1 << "\n";
			continue;
		}
		if(c <= dis){
			cout << c + dis << "\n";
		}
		else{
			cout << c - dis << "\n"; 
		}
	}
	return 0;
}
