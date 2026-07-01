#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll k;
	cin >> k;
	vector<ll> d(n);
	for(int i = 0; i < n; i++){
		cin >> d[i];
	}
	ll low = d[0], cost = k + 1;
	for(int i = 0; i < n; i++){
		if(d[i] - low < k + 1){
			cost += d[i] - low;
		}
		else{
			cost += k + 1;
		}
		low = d[i];
	}
	cout << cost;
}
