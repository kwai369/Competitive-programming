/* https://codeforces.com/problemset/problem/25/A */

#include <bits/stdc++.h>
using namespace std;

const int maxn = 100;
bool a[maxn];

int main(){
	int n;
	cin >> n;
	int b[n],z = 0,o = 0;
	for(int i=0;i<n;i++){
		cin >> b[i];
		if(b[i]%2){
			o++;
			a[i] = 1;
		}
		else{
			z++;
		}
	}
	int ans = 0;
	if(o<z){
		ans = 1;
	}
	for(int i=0;i<n;i++){
		if(a[i]==ans){
			cout << i+1;
		}
	}
}
