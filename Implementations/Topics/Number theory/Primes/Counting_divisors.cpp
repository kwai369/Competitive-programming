/** 
  * Description : Counting number of factors of a number n.
  * Source : USACO guide.
  * Verification : https://cses.fi/problemset/task/1713/ 
  */
  
 	int t;
	cin >> t;
	while(t--){
		  int n;
		  cin >> n;
		  map<int,int> mp;
		  for(int x = 2; x*x <= n; x++){
			    while (n%x == 0) {
				    mp[x]++;
				    n /= x;
			  }
		  }
		  if(n>1){
			    mp[n]++;
		  }
		  int ans = 1; 
		  for(pair<int,int> p : mp){
			    ans *= (p.second+1);
		  }
		  cout << ans << "\n";
	}
