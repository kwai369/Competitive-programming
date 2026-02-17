#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    int n;
	cin >> n;
	vector<int> petals(n+1);
	vector<int> sum_of_petals(n+1);
	for(int i = 1; i <= n; i++){
		cin >> petals[i];
		sum_of_petals[i] = sum_of_petals[i-1] + petals[i];
	}
	int ans = 0;
	for(int i = 1; i < n; i++){
		for(int j = i+1; j <= n; j++){
			int sum = sum_of_petals[j] - sum_of_petals[i-1];
			int num = (j - i) + 1;
			if(sum % num == 0){
				int avg = sum/num;
				for(int k = i; k <= j; k++){
					if(avg == petals[k]){
						ans++;
						break;
					}
				}
			}
		}
	}
	cout << ans + n << "\n";
	return 0;
}
