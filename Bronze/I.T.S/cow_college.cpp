#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> vec(n);
	for(auto& i : vec){
		cin >> i;
	}
	ll maxi = INT_MIN;
	int mini = INT_MAX;
	sort(vec.begin(), vec.end());
	for(int i = 0; i < n; i++){
		ll approx = ll(vec[i]) * ll((n - 1) - i + 1);
		if(approx > maxi){
			maxi = approx;
			mini = vec[i];
		}
	}
	cout << maxi << " " << mini << endl;
	return 0;
}
