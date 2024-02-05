#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("gymnastics");
	int k,n;
	cin >> k >> n;
	vector<vector<int>> rank(n,vector<int>(k,0));
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			int c;
			cin >> c;
			c--;
			rank[c][i] = j;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int valid=0;
			for(int e=0;e<k;e++){
				if(rank[j][e] < rank[i][e]){
					valid++;
				}
			}
			if(valid==0 || valid==k){
				ans++;
			}
		}
	}
	cout << ans;
}
