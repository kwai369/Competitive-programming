#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    int n;
	  cin >> n;
	  vector<pair<char, int>> cows(n);
	  for(int i = 0; i < n; i++){
		    cin >> cows[i].first >> cows[i].second;
	  }
	  int ans = INT_MAX;
	  for(int i = 0; i < n; i++){
		    int count = 0;
		    for(int j = 0; j < n; j++){
			      if(cows[j].first == 'L' && cows[i].second > cows[j].second){
				        count++;
			      }
			      if(cows[j].first == 'G' && cows[i].second < cows[j].second){
				        count++;
			      }
		    }
		    ans = min(ans, count);
	  }
	  cout << ans;
	  return 0;
}
