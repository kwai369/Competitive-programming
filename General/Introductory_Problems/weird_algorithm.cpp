#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    cout << n << " ";
    while(n != 1){
        if(n%2){
            n*=3;
            n++;
            cout << n << " ";
        }
        else{
            n/=2;
            cout << n << " ";
        }
    }
    return 0;
}
