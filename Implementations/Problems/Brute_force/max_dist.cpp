/* https://codeforces.com/gym/102951/problem/A */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	int n;
	cin >> n;
	vector<int> x(n), y(n);

	for (int &t : x) { cin >> t; }
	for (int &t : y) { cin >> t; }

	int max_squared = 0;                   
	for (int i = 0; i < n; i++) {          
		for (int j = i + 1; j < n; j++) {  
			int dx = x[i] - x[j];
			int dy = y[i] - y[j];
			int square = dx * dx + dy * dy;

			max_squared = max(max_squared, square);
		}
	}

	cout << max_squared << endl;
}
