#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    vector<ll> n(7);
    for(int i=0; i<7; i++){
        cin >> n[i];
    }
    sort(n.begin(), n.end());
    ll a = n[0], b = n[1];
    ll c = n[6] - (a + b);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
