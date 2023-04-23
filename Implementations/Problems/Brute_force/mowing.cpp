/* http://www.usaco.org/index.php?page=viewproblem2&cpid=593 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("mowing");
	int n;
	cin >> n;
	vector<pair<char,int>> step(n);
	for(auto &[dir,dis] : step){
		cin >> dir >> dis;
	}
	pair<int,int> cur{0,0};
	map<pair<int,int>,int> pro{{cur,0}};
	int t = 0;
	int maxi = INT32_MAX;
	for(const auto &[dir,dis] : step){
		pair<int,int> del;
		switch(dir){
			case 'N':
				del = pair<int,int>{0,1};
				break;
			case 'E':
				del = pair<int,int>{1,0};
				break;
			case 'W':
				del = pair<int,int>{-1,0};
				break;
			case 'S':
				del = pair<int,int>{0,-1};
				break;
		}
		for(int i=0;i<dis;i++){
			cur = pair<int,int>{cur.first+del.first,cur.second+del.second};
			t++;
			if(pro.count(cur)){
				maxi = min(maxi,t-pro[cur]);
			}
			pro[cur] = t;
		}
	}
	if(maxi==INT32_MAX){
		cout << -1;
	}
	else{
		cout << maxi;
	}
}
