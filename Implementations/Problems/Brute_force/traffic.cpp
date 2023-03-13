/* http://www.usaco.org/index.php?page=viewproblem2&cpid=917 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("traffic");
	int n;
	cin >> n;
	int r1[n],r2[n];
	string t[n];
	for(int i=0;i<n;i++){
		cin >> t[i] >> r1[i] >> r2[i];
	}
	int a = -9999,b = 9999;
	for(int i = n-1;i>=0;i--){
		if(t[i]=="none"){
			a = max(a,r1[i]),b = min(b,r2[i]);
		}
		if(t[i]=="on"){
			a -= r2[i],b -= r1[i];
			a = max(0,a);
		}
		if(t[i]=="off"){
			a += r1[i], b += r2[i]; 
		}
	}
	cout << a << " " << b << "\n";
	a = -9999 , b = 9999;
	for(int i=0;i<n;i++){
		if(t[i]=="none"){
			a = max(a,r1[i]),b = min(b,r2[i]);
		}
		if(t[i]=="on"){
			a += r1[i],b += r2[i];
		}
		if(t[i]=="off"){
			a -= r2[i],b -= r1[i];
			a = max(0,a);
		}
	}
	cout << a << " " << b;
}