/* https://cses.fi/problemset/task/1069/ */

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int ans = -1;
	for(int i=0;i<int(s.length());i++){
		char c = s[i];
		int ans1 = 0;
		while(c==s[i]){
			ans1++;
			i++;
		}
		i--;
		ans = max(ans1,ans);
	}
	cout << ans;
}
