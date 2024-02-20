#include <bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin >> k;
	int n = k*2;
	vector<int> vec(n);
	for(auto& i : vec){
		cin >> i;
	}
	sort(vec.begin(),vec.end());
	int ans = INT32_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int mini = 0;
			vector<int> poss;
			for(int e = 0;e<n;e++){
				if(e != i && e != j){
					poss.push_back(vec[e]);
				}
			} 
			for(int e = 0;e<n-2;e+=2){
				mini += (poss[e+1] - poss[e]);
			}
			ans = min(mini,ans);
		}
	}
	cout << ans;
}
