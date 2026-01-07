#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("mixmilk");
	int c[3], m[3];
    for(int i = 0; i < 3; i++){    
        cin >> c[i] >> m[i];
    }
    for(int i = 0; i < 100; i++){
        int a = i % 3;
        int b = (i+1) % 3;
        int amt = min(m[a], c[b] - m[b]);
        m[a] -= amt;
        m[b] += amt;
    }
    for(int i = 0; i < 3; i++){
        cout << m[i] << "\n";
    }
	return 0;
}
