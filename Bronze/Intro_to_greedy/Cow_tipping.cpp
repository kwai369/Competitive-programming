#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("cowtip");
	int n;
	cin >> n;
	vector<string> state(n);
	for(int i = 0; i < n; i++){
		cin >> state[i];
	}
	int ans = 0;
	while(true){
		int row = -1, col = -1;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(state[i][j] == '1'){
					row = i;
					col = j;
				}
			}
		}
		if(row >=0 || col >=0){ans++;}
		for(int i = 0; i <= row; i++){
			for(int j = 0; j <= col; j++){
				if(state[i][j] == '0'){state[i][j] = '1';}
				else{state[i][j] = '0';}
			}
		}
		bool check = true;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(state[i][j] == '1'){
					check = false;
				}
			}
		}
		if(check){break;}
	}
	cout << ans;
}
