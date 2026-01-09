#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("lostcow");
    int x, y;
    cin >> x >> y;
    int dist = 0, range = 1;
    while(true){
        if(x <= y && y <= x+range){
            dist += abs(x-y);
            break;
        }
        if(y <= x && y >= x+range){
            dist += abs(x-y);
            break;
        }
        dist += 2 * abs(range);
        range *= (-2);
    }
    cout << dist << endl;
    return 0;
}
