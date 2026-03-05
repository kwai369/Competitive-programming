#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
    cin >> n >> x;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (mp[x - a]) {
            cout << mp[x - a] << " " << i << "\n";
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE\n";
	return 0;
}
