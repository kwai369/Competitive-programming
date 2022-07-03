/** 
  * Description : Counting number of factors of a number x.
  * Source : USACO guide.
  * Verification : https://cses.fi/problemset/task/1713/ 
  */
  
#include <iostream>
using namespace std;

const int MAX_N = 1e6;
int max_div[MAX_N + 1];

int main() {
	for (int i = 2; i <= MAX_N; i++) {
		if (max_div[i] == 0) {
			for (int j = i; j <= MAX_N; j += i) {
				max_div[j] = i;
			}
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
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
		cout << div_num << '\n';
	}
}
