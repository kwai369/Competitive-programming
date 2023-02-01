/* https://codeforces.com/problemset/problem/268/A */

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][0]==a[j][1]){
				ans++;
			}
		}
	}
	cout << ans;
}
