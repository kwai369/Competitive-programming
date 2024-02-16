#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

#define all(x) (x).begin(), (x).end()
#define ll long long
#define f first
#define s second
#define vi vector<int>

int main(){
	int n;
	cin >> n;
	vi vec(n);
	for(auto& i : vec){
		cin >> i;
	}
	sort(all(vec));
	cout << int(unique(all(vec)) - vec.begin());
}
