#include<bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("herding");
	vector<int> pos(3);
	cin >> pos[0] >> pos[1] >> pos[2];
	sort(pos.begin(), pos.end());
	if((pos[1] - pos[0]) == 1 && (pos[2] - pos[1]) == 1){
		cout << 0 << "\n" << 0;
		return 0;
	}
	if((pos[1] - pos[0]) == 2 || (pos[2] - pos[1]) == 2){
		cout << 1 << "\n" << max((pos[1] - pos[0]), (pos[2] - pos[1])) - 1;
		return 0; 
	}
	cout << 2 << "\n" << max((pos[1] - pos[0]), (pos[2] - pos[1])) - 1;
}
