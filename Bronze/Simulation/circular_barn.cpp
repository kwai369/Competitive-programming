#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("cbarn");
    int n, total_dist = 0;
    cin >> n;
    vector<int> cows(n);
    for (int i = 0; i < n; i++){
        cin >> cows[i];
        total_dist += cows[i];
    }
    int ans = INT32_MAX;
    for(int i = 0; i < n; i++){
        int count = 0;
        int left = total_dist;
        for(int j = i; j < n + i; j++){
            left -= cows[j % n];
            count += left;
        }
        ans = min(ans, count);
    }
    cout << ans << endl;
    return 0;
}
