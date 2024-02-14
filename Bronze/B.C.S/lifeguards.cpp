#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("lifeguards");
	vector<int> tl(1001);
	int n;
	cin >> n;
	vector<int> start(n);
	vector<int> end(n);
	for(int i=0;i<n;i++){
		cin >> start[i] >> end[i];
		for(int j = start[i];j < end[i];j++){
			tl[j]++;
		}
	}
	
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j = start[i];j < end[i];j++){
			tl[j]--;
		}
		int cur = 0;
		for(int j = 0;j < 1000;j++){
			if(tl[j] > 0){
				cur++;
			}
		}
		for(int j = start[i];j < end[i];j++){
			tl[j]++;
		}
		ans = max(ans,cur);
	} 	 
	cout << ans;
}
