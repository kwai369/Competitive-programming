// Method 1:
/*#include <bits/stdc++.h>
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
}*/

// Method 2:
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("cownomics");
    int n, m;
	cin >> n >> m;
	vector<bool> spotty_a(m), spotty_c(m), spotty_g(m), spotty_t(m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			char genome;
			cin >> genome;
			switch(genome){
				case 'A':
					spotty_a[j] = true;
					break;
				case 'C':
					spotty_c[j] = true;
					break;
				case 'G':
					spotty_g[j] = true;
					break;
				case 'T':
					spotty_t[j] = true;
					break;
				default:
					continue;
			}
		}
	}
	vector<bool> plain_a(m), plain_c(m), plain_g(m), plain_t(m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			char genome;
			cin >> genome;
			switch(genome){
				case 'A':
					plain_a[j] = true;
					break;
				case 'C':
					plain_c[j] = true;
					break;
				case 'G':
					plain_g[j] = true;
					break;
				case 'T':
					plain_t[j] = true;
					break;
				default:
					continue;
			}
		}
	}
	int ans = 0;
	for(int i = 0; i < m; i++){
		if((!spotty_a[i] || !plain_a[i]) &&
		   (!spotty_c[i] || !plain_c[i]) &&
		   (!spotty_g[i] || !plain_g[i]) &&
		   (!spotty_t[i] || !plain_t[i])){
			ans++;
		   }
	}
	cout << ans << endl;  
	return 0;
}
