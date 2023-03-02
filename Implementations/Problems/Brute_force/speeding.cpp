/* http://www.usaco.org/index.php?page=viewproblem2&cpid=568 */

#include<bits/stdc++.h>
using namespace std;

#define fio(s) freopen(s,"r",stdin);
#define foo(s) freopen(s,"w",stdout);

const int LEN = 100;

int main(){
	fio("speeding.in");
	foo("speeding.out");
	int n,m;
	cin >> n >> m;
	
	int start = 0;
	vector<int> road(LEN);
	for(int i=0;i<n;i++){
		int lenght,speed;
		cin >> lenght >> speed;
		for(int j = start;j<start+lenght;j++){
			road[j] = speed;
		}
		start += lenght;
	}
	start = 0;
	vector<int> bessie(LEN);
	for(int i=0;i<m;i++){
		int lenght,speed;
		cin >> lenght >> speed;
		for(int j = start;j<start+lenght;j++){
			bessie[j] = speed;
		}
		start += lenght;
	}
	int maxi = 0; 
	for(int i=0;i<100;i++){
		maxi = max(maxi,bessie[i]-road[i]);
	}
	cout << maxi;
}
