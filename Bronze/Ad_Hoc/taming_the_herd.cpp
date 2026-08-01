#include <bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("taming");
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	if(v[0] == -1 || v[0] == 0){
		v[0] = 0;
	}
	else{
		cout << -1;
		return 0;
	}
	int mini = 0, maxi = 0;
	for(int i = 0; i < n; i++){
		if(v[i] > -1){
			if(i - v[i] < 0){
				cout << -1;
				return 0;
			}
			else{
				if(v[i - v[i]] == -1 || v[i - v[i]] == 0){
					v[i - v[i]] = 0;
				}
				else{
					cout << -1;
					return 0;
				}
				for(int j = (i - v[i]) + 1, k = 1; j < i; j++, k++){
					if(v[j] == -1){
						v[j] = k;
					}
					else if(v[j] != k){
						cout << -1;
						return 0;
					}
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(v[i] == 0){
			mini++;
		}
		if(v[i] == -1){
			maxi++;
		}
	}
	cout << mini << " " << mini+maxi;
	return 0;
}
