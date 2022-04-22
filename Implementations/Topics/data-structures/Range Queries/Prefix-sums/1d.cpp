/* 
 * Description : Finding 1d array prefix sums.
 * Source : USACO guide.
 */

vector<long long> prefixsums(vector<long long> vec){
	  vector<long long> pref(int(vec.size())+1);
	  for(int i = 1;i <= int(vec.size());i++){
		  pref[i] = pref[i-1] + vec[i-1];
	  }
	  return pref;
}
