#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("breedflip");
	int n;
	cin >> n;
	string a, b;
	cin >> a;
	cin >> b;
	vector<int> flips(n);
	for(int i = 0; i < n; i++){flips[i] = abs(a[i] - b[i]);}
	int ans = 0, sum = 0;
	for(int i = 0; i < n; i++){
		int temp = sum;
		sum += flips[i];
		if(sum == temp && sum != 0){ans++; sum = 0;}
	}
	cout << ans;
}
