#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("outofplace");
	int n;
	cin >> n;
	vector<int> lineup(n);
	for(int i = 0; i < n; i++){
		cin >> lineup[i];
	}
	vector<int> sorted = lineup;
	sort(sorted.begin(), sorted.end());
	int swaps = 0;
	for(int i = 0; i < n; i++){
		if(sorted[i] != lineup[i]){swaps++;}
	}
	cout << swaps - 1;
	return 0;
}
