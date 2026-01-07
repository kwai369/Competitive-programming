#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("shell");
    int shell[3] = {0, 1, 2};
    int n;
    cin >> n;
    vector<int> counter(3);
    for(int i = 0; i < n; i++){
		int a, b, c;
        cin >> a >> b >> c;
        a--, b--, c--;
        swap(shell[a], shell[b]);
        counter[shell[c]]++;
    }
    cout << max({counter[0], counter[1], counter[2]}) << endl;
	return 0;
}
