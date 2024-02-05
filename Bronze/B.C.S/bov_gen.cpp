#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("cownomics");
	int n,m;
	cin >> n >> m;
	vector<vector<bool>> spotty(m,vector<bool>(26,0));
	vector<vector<bool>> plain(m,vector<bool>(26,0));
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		for(int j=0;j<m;j++){
			spotty[j][s[j]-'A'] = true;
		}
	}
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		for(int j=0;j<m;j++){
			plain[j][s[j]-'A'] = true;
		}
	}
	int invalid = 0;
	for(int i=0;i<m;i++){
		if((spotty[i][0] + plain[i][0] == 2)||
			(spotty[i][2] + plain[i][2] == 2) ||
			(spotty[i][6] + plain[i][6] == 2) ||
			(spotty[i][19] + plain[i][19] == 2)){
				invalid++;
			}
	}
	cout << m-invalid;
}
