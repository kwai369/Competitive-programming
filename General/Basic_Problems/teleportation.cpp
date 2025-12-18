#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("teleport");
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int tele_dis = abs(min(a, b) - min(x, y)) + abs(max(a, b) - max(x, y));
    // Checks if the teleporter is actually useful or not.
    // if |x-y| >= |a-b|, then no teleporter.
    int tele_use = abs(x - y); 
    cout << min(tele_dis, tele_use);
    return 0;
}
