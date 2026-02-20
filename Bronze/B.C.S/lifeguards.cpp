#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("lifeguards");
    int n;
	cin >> n;
	vector<int> interval(1001);
	vector<int> start(n), end(n);
	int low = INT_MAX, high = INT_MIN;
	for(int i = 0; i < n; i++){
		cin >> start[i] >> end[i];
		for(int j = start[i]; j < end[i]; j++){
			interval[j]++;
		}
		low = min(low, start[i]);
		high = max(high, end[i]);
	}
	int ans = 0; 
	for(int i = 0; i < n; i++){
		for(int j = start[i]; j < end[i]; j++){
			interval[j]--;
		}
		int count = 0;
		for(int j = low; j <= high; j++){
			if(interval[j]){
				count++;
			}
		}
		for(int j = start[i]; j < end[i]; j++){
			interval[j]++;
		}
		ans = max(ans, count);
	}
	cout << ans << endl;
	return 0;
}
