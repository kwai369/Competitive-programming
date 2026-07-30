#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("promote");
	vector<int> b(4), a(4);
	int sum_b = 0, sum_a = 0;
	for(int i = 0; i < 4; i++){
		cin >> b[i] >> a[i];
		sum_b += b[i];
		sum_a += a[i];
	}
	int new_add = sum_a - sum_b;
	for(int i = 0; i < 3; i++){
		new_add = (b[i] + new_add) - a[i];
		cout << new_add << "\n";
	}
	return 0;
}
