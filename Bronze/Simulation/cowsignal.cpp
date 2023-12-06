#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("cowsignal");
	int m,n,k;
	cin >> m >> n >> k;
	char sig[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> sig[i][j];
		}
	} 
	for(int p=0;p<m;p++){
		for(int q=0;q<k;q++){
			for(int r=0;r<n;r++){
				for(int s=0;s<k;s++){
					cout << sig[p][r];
				}
			}
			cout << "\n";
		}
	}
}
