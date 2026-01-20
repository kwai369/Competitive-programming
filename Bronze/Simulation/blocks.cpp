#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int final_count[26];

int main(){
    setIO("blocks");
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        vector<int> count_one(26);
        vector<int> count_two(26);
        string a, b;
        cin >> a >> b;
        for(int j = 0; j < a.length(); j++){
            count_one[a[j] - 'a']++;
        }
        for(int j = 0; j < b.length(); j++){
            count_two[b[j] - 'a']++;
        }
        for(int j = 0; j < 26; j++){
            final_count[j] += max(count_one[j], count_two[j]);
        }
    }
    for(int i = 0; i < 26; i++){
        cout << final_count[i] << "\n";
    }
    return 0;
}
