/* https://cses.fi/problemset/result/5405522/ */

#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5+5;

int a[MAX];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n-1;i++){
		int x;
		cin >> x;
		x--;
		a[x]++;
	}
	for(int i=0;i<n;i++){
		if(!a[i]){
			i++;
			cout << i;
			i--;
		}
	}
}
