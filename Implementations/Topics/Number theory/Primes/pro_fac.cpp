/**
  * Description : finds product of factors of a number x.
  * Source : Own.
  */

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6;
int max_div[MAX_N + 1];

int binpower(int x,int n){
	assert(n>=0);
	int res = 1;
	//x %= m;
	while(n > 0){
		if(n%2==1){
			res = res * x;
		}
		x = x * x;
		n /= 2;
	}
	return res;
}

int main() {
	for (int i = 2; i <= MAX_N; i++) {
		if (max_div[i] == 0) {
			for (int j = i; j <= MAX_N; j += i) {
				max_div[j] = i;
			}
		}
	}
	
	int x;
	cin >> x;
	int x1 = x;
	int div_num = 1;
	while (x != 1) {
		int prime = max_div[x];
		int count = 0;
		while (x % prime == 0) {
			count++;
			x /= prime;
		}
		div_num *= count + 1;
	}
	cout << binpower(x1,div_num/2);
}
