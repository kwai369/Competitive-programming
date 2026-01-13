#include<bits/stdc++.h>
#define ll long long
using namespace std;

int RAMPS[100];

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("traffic");
    int n;
    cin >> n;
    vector<vector<int>> range(n, vector<int>(2));
    for (int i = 0; i < n; i++){
        string s;
        cin >> s >> range[i][0] >> range[i][1];
        if(s == "on"){
            RAMPS[i] = 1;
        }
        else if(s == "off"){
            RAMPS[i] = -1;
        }
        else{
            RAMPS[i] = 0;
        }
    }
    int lowest = -9999, highest = 9999;
    for(int i = n-1; i >= 0; i--){
        if(RAMPS[i] == 0){
            lowest = max(lowest, range[i][0]);
            highest = min(highest, range[i][1]);
        }
        else if((RAMPS[i]*(-1)) == 1){
            lowest += range[i][0];
            highest += range[i][1];
        }
        else{
            lowest -= range[i][1];
            highest -= range[i][0];
            lowest = max(0, lowest);
        }
    }
    cout << lowest << " " << highest << endl;
    lowest = -9999, highest = 9999;
    for(int i = 0; i < n; i++){
        if(RAMPS[i] == 0){
            lowest = max(lowest, range[i][0]);
            highest = min(highest, range[i][1]);
        }
        else if(RAMPS[i] == 1){
            lowest += range[i][0];
            highest += range[i][1];
        }
        else{
            lowest -= range[i][1];
            highest -= range[i][0];
            lowest = max(0, lowest);
        }
    }
    cout << lowest << " " << highest << endl;
    return 0;
}
