#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("circlecross");
	string s;
	cin >> s;
	vector<int> entry(26,-1);
	vector<int> exit(26,-1);
	for(int i=0;i<52;i++){
		if(entry[s[i] - 'A'] == -1){
			entry[s[i] - 'A'] = i;
		}
		else{
			exit[s[i] - 'A'] = i;
		}
	}
	int ans = 0;
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			if(entry[i] < entry[j] && entry[j] < exit[i] && exit[i] < exit[j]){
				ans++;
			}
		}
	} 
	cout << ans;
}
