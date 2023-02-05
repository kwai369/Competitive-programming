/* https://codeforces.com/problemset/problem/1703/A */

#include <bits/stdc++.h>
using namespace std;

int solve(){
	string s;
	cin >> s;
	vector<string> str = {"Yes","yEs","yeS","YEs","yES","YeS","YES","yes"};
	for(int i=0;i<8;i++){
		if(s==str[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		if(solve()){
			cout << "YES\n";
		}
		else{
			cout << "NO\n"; 
		}
	}
}
