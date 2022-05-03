/**
  * Description : Calculating the minimum difference between weights by generating all possible subsets.
  * Source : USACO guide.
  * Verification : https://cses.fi/problemset/task/1623
  */
  
int n;
vector<int> vec;

ll solve(int i,ll s1,ll s2){
	if(i==n){
		return abs(s1-s2);
	}
	return min(solve(i+1,s1+vec[i],s2),solve(i+1,s1,s2+vec[i]));
}

int main(){
	cin >> n;
	vec.resize(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}
	cout << solve(0,0,0);
}
