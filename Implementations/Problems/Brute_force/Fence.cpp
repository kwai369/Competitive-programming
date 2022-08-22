/* https://codeforces.com/problemset/problem/363/B */

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int ans1 = 0;
	for(int i=0;i<k;i++){
		ans1 += a[i];
	}
	int ans2 = ans1,ans=0;
	for(int i=k,j=0;i<n;i++,j++){
		ans2 -= a[j];
		ans2 += a[i];
		if(ans2<ans1){
			ans1 = ans2;
			ans = j+1;
		} 
	}
	cout << ans+1;
}
