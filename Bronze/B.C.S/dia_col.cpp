// Method 1: Simple sweeping
/*#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("diamond");
	int n,k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	int ans = 0;
	for (int i = 0; i < n; ++i){
		int count = 0;
		for(int j = 0; j < n; ++j){
			if(v[i] <= v[j] && v[j] <= v[i]+k){  // Done with forward swiping, could also be done with backward swiping.
				count++;
			}
		}
		ans = max(ans,count);
	}
	cout << ans;
}*/

// Method 2: Using sort
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("diamond");
    int n, k;
	cin >> n >> k;
	vector<int> sizes(n);
	for(int i = 0; i < n; i++){
		cin >> sizes[i];
	}
	sort(sizes.begin(), sizes.end());
	int ans = 0;
	for(int i = 0; i < n; i++){
		int low = sizes[i], high = sizes[i];
		int count = 0;
		for(int j = 0; j < n; j++){
			if(abs(low - sizes[j]) <= k && abs(high - sizes[j]) <= k){
				count++;
				low = min(low, sizes[j]);
				high = max(high, sizes[j]);
			}
		}
		ans = max(ans, count);
	}
	cout << ans << endl;
	return 0;
}
