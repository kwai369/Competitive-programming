#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int z = count(s.begin(), s.end(), '0');
		if(z == 0){
			cout << 0 << "\n";
		}
		else{
			int f = s.find('0');
			int l = s.rfind('0');
			l - f + 1 == z ? cout << "1" : cout << "2";
			cout << "\n";
		}
	}
	return 0;
}
