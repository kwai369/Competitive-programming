#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("speeding");
    int n, m;
    cin >> n >> m;
    int bessie_speed[101], speed_limit[101];
    int total_len = 1;
    for(int i = 0; i < n; i++){
        int len, speed;
        cin >> len >> speed;
        for(int j = total_len; j < total_len + len; j++){
            speed_limit[j] = speed;
        }
        total_len += len;
    }
    total_len = 1;
    for(int i = 0; i < m; i++){
        int len, speed;
        cin >> len >> speed;
        for(int j = total_len; j < total_len + len; j++){
            bessie_speed[j] = speed;
        }
        total_len += len;
    }
    int ans = 0;
    for (int i = 1; i < 101; i++){
        ans = max(ans, bessie_speed[i] - speed_limit[i]);
    }
    cout << ans << endl;
    return 0;
}
