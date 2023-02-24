/* http://www.usaco.org/index.php?page=viewproblem2&cpid=891 */

#include<bits/stdc++.h>
using namespace std;

#define fio(s) freopen(s,"r",stdin);
#define foo(s) freopen(s,"w",stdout);

int main(){
	fio("shell.in");
	foo("shell.out");
	int n;
    cin >> n;
    vector<int> vec(3);
    for(int i=0;i<3;i++){
		vec[i] = i;
	}
	vector<int> count(3,0);
	for(int i=0;i<n;i++){
		int a,b,g;
		cin >> a >> b >> g;
		a--,b--,g--; 
		swap(vec[a],vec[b]);
		count[vec[g]]++;
	}
	cout << max(count[0],max(count[1],count[2]));
    return 0;
}
