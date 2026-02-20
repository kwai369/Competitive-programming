#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("circlecross");
	string points;
	cin >> points;
	vector<vector<int>> alphabet(26);
	for(int i = 0; i < 52; i++){
		alphabet[points[i] - 'A'].push_back(i);
	}
	int ans = 0;
	for(int i = 0; i < 26; i++){
		vector<int> count(26);
		for(int j = alphabet[i][0] + 1; j < alphabet[i][1]; j++){
			count[points[j] - 'A']++;
		}
		for(int j = 0; j < 26; j++){
			if(count[j] == 1){
				ans++;
			}
		}
	}
	cout << ans/2 << endl;
	return 0;
}
