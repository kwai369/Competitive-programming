#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("cowsignal");
    int m, n, k;
    cin >> m >> n >> k;
    vector<string> cow_signal(m);
    for(int i = 0; i < m; i++){
        cin >> cow_signal[i];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < k; j++){
            for(int l = 0; l < n; l++){
                for(int p = 0; p < k; p++){
                    cout << cow_signal[i][l];
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
