/* http://www.usaco.org/index.php?page=viewproblem2&cpid=665 */

#include<bits/stdc++.h>
using namespace std;

#define fio(s) freopen(s,"r",stdin);
#define foo(s) freopen(s,"w",stdout);

int main(){
	fio("cowsignal.in");
	foo("cowsignal.out");
	int m,n,k;
	cin >> m >> n >> k;
	string str[m];
	for(int i=0;i<m;i++){
		cin >> str[i];
	}	
	for(int i=0;i<m*k;i++){
		for(int j=0;j<n*k;j++){
			cout << str[i/k][j/k];
		}
		cout << "\n";
	}
}
