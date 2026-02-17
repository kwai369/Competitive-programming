// Method 1: 
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("gymnastics");
    int k, n;
	cin >> k >> n;
	vector<vector<int>> rankings(n, vector<int>(k));
	for(int i = 0; i < k; i++){
		for(int j = 0; j < n; j++){
			int a;
			cin >> a;
			rankings[a - 1][i] = j + 1;
		}
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int consistent = 0;
			for(int l = 0; l < k; l++){
				if(rankings[i][l] < rankings[j][l]){
					consistent--;
				}
				if(rankings[i][l] > rankings[j][l]){
					consistent++;
				}
			}
			if(consistent == -k || consistent == k){
				count++;
			}
		}
	}
	cout << count << "\n";
	return 0;
}*/

// Method 2: 
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
    setIO("gymnastics");
    int k, n;
	cin >> k >> n;
	vector<vector<bool>> ranking_matrix(n, vector<bool>(n));
	for(int i = 0; i < k; i++){
		vector<int> ranks(n);
		for(int& x : ranks){
			cin >> x;
			x--;
		}
		for(int j = 0; j < n; j++){
			for(int l = j + 1; l < n; l++){
				ranking_matrix[ranks[j]][ranks[l]] = true;
			}
		}
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			count += (!ranking_matrix[i][j] || !ranking_matrix[j][i]);
		}
	}
	cout << count << "\n";
	return 0;
}
