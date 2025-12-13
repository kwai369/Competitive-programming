#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("paint");
    vector<bool> count(100);

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    for(int i=a;i<b;i++){count[i] = true;}
    for(int i=c;i<d;i++){count[i] = true;}

    int ans = 0;
    for(int i = min(a,c); i < max(b,d)+1; i++){
        ans += count[i];
    }

    cout << ans << endl;
    return 0;
}
