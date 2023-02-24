/* http://www.usaco.org/index.php?page=viewproblem2&cpid=855 */

#include<bits/stdc++.h>
using namespace std;

#define fio(s) freopen(s,"r",stdin);
#define foo(s) freopen(s,"w",stdout);

int main(){
	fio("mixmilk.in");
	foo("mixmilk.out");
	int c[3],m[3];
	for(int i=0;i<3;i++){
		cin >> c[i] >> m[i];
	}
	for(int i=0;i<100;i++){
		int j = i % 3,k = (j+1) % 3;
		int tranf = min(m[j],c[k]-m[k]);
		m[j] -= tranf;
		m[k] += tranf;
	}
	cout << m[0] << "\n" << m[1] << "\n" << m[2];
	return 0;
}
