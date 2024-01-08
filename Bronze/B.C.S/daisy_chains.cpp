#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	//setIO("diamond");
	int n;
	cin >> n;
	vector<int> pet(n+1);
	vector<int> sum(n+1);
	for(int i=1;i<=n;i++){
		cin >> pet[i];
		sum[i] += pet[i];
		sum[i] += sum[i-1];
	}
	int val = 0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			double avg = (sum[j] - sum[i-1]);
			avg /= ((j - i) + 1);
			for(int k = i;k <= j;k++){
				if(avg == pet[k]){
					val++;
					break;
				}
			} 
		}
	}
	cout << val;
}
