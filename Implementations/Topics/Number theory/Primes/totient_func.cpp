/**
  * Description : implements euler's totient function.
  * Source : Own.
  */

#include <bits/stdc++.h>
using namespace std;

map<int,int> mp;

int binpower(int x,int n){
	assert(n>=0);
	int res = 1;
	while(n > 0){
		if(n%2==1){
			res = res * x;
		}
		x = x * x;
		n /= 2;
	}
	
	return res;
}

void factors(int n) {
     for(int x = 2; x*x <= n; x++){
        while (n%x == 0) {
			mp[x]++;
			n /= x;
        }
     }  
     if (n > 1) {
        mp[n]++;
     }
}

int main(){
	int n;
	cin >> n;
	factors(n);
	int ans = 1;
	for(auto it : mp){
		int exp = binpower(it.first,it.second-1) * (it.first-1);
		ans *= exp;
	}
	cout << ans;
}
