#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("shuffle");
    int n;
    cin >> n;
    vector<int> shuffle_order(n);
    vector<int> order(n);
    for(int i = 0; i < n; i++){
        cin >> shuffle_order[i];
        shuffle_order[i]--;
    }
    for (int i = 0; i < n; i++){
        cin >> order[i];
    }
    for(int i = 0; i < 3; i++){
        vector<int> old_order(n);
        for(int j = 0; j < n; j++){
            old_order[j] = order[shuffle_order[j]];
        }
        order = old_order;        
    }
    for (int i = 0; i < n; i++){
        cout << order[i] << "\n";
    }
    return 0;
}
