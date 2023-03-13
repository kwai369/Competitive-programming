/* http://www.usaco.org/index.php?page=viewproblem2&cpid=664 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

vector<int> count(string s){
	vector<int> freq(26);
	for(char c : s){
		freq[c - 'a']++;
	}
	return freq;
}

int main() {
	setIO("blocks");
	int n;
	cin >> n;
	vector<pair<string,string>> vec(n);
	for(auto &[w1,w2] : vec){
		cin >> w1 >> w2;
	}
	vector<int> total(26);
	for(auto &[w1,w2] : vec){
		vector<int> freq1 = count(w1);
		vector<int> freq2 = count(w2);
		for(int i=0;i<26;i++){
			total[i] += max(freq1[i],freq2[i]);
		}
	}
	for(auto i : total){
		cout << i << "\n";
	}
}

