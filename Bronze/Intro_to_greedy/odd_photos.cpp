#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	int even = 0, odd = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		x%2==0 ? even++ : odd++;
	}
	if(even > odd){
		cout << 2 * odd + 1;
	}
	else{
		while(odd - even > 2){
			odd -= 2;
			even += 1;
		}
		if(odd - even == 0){
			cout << odd + even;
		}
		else if(odd - even == 1){
			cout << odd + even - 2;
		}
		else{
			cout << odd + even - 1;
		}
	}
}
