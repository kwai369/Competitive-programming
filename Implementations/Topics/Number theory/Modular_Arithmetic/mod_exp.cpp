/**
  * Description : Calculates x^n with binary exponentiation in log(n) time.
  * Source : USACO guide
  * Verification : https://cses.fi/problemset/task/1095
  */
  

ll binpower(ll x,ll n,ll m){
	assert(n>=0);
	ll res = 1;
	x %= m;
	while(n > 0){
		if(n%2==1){
			res = res * x % m;
		}
		x = x * x % m;
		n /= 2;
	}
	
	return res;
}
