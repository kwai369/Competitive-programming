#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    //setIO("teleport");
    int n;
    cin >> n;
    int ans = 0; 
    for(int i=0;i<n;i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c >= 2){
            ans++;
        }
    }
    cout << ans << endl;
}
