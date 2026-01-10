#include<bits/stdc++.h>
#define ll long long
using namespace std;

int RANGE[1001];

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("blist");
    int n;
    cin >> n;
    int first = 9999, last = -9999;
    for(int i = 0; i < n; i++){
        int start, end, buckets;
        cin >> start >> end >> buckets;
        RANGE[start] += buckets;
        RANGE[end] -= buckets;
        first = min(first, start);
        last = max(last, end);
    }
    int max_buckets = 0, count = 0;
    for(int i = first; i <= last; i++){
        count += RANGE[i];
        max_buckets = max(max_buckets, count);
    }
    cout << max_buckets << endl;
    return 0;
}
