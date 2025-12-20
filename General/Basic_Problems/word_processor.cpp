#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("word");
    int n, k;
    cin >> n >> k;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int i = 0;
    while(i<n){
        int count = 0;
        while(int(s[i].length()) + count <= k){
            count += (s[i].length());
            if(int(s[i+1].length()) + count <= k){
                cout << s[i] << " ";
            }
            else{
                cout << s[i];
            }
            i++;
        }
        cout << "\n";
    }
    return 0;
}
