#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main() {
	setIO("reduce");
	int n;
	cin >> n;
	vector<pair<int, int>> cor(n);
	for(int i = 0; i < n; i++){
		cin >> cor[i].first >> cor[i].second;
	}
	set<pair<int, int>> s;
	sort(cor.begin(), cor.end());
	for(int i = 0; i < 3; i++){
		s.insert({cor[i].first, cor[i].second});
		s.insert({cor[n-i-1].first, cor[n-i-1].second});
	}
	sort(cor.begin(), cor.end(), [](const auto& a, const auto& b){
		return a.second < b.second;
	});
	for(int i = 0; i < 3; i++){
		s.insert({cor[i].first, cor[i].second});
		s.insert({cor[n-i-1].first, cor[n-i-1].second});
	}
	vector<pair<int, int>> v(s.begin(), s.end());
	int m = v.size(), ans = INT_MAX;
	for(int i = 0; i < m; i++){
		for(int j = i+1; j < m; j++){
			for(int k = j+1; k < m; k++){
				int x1 = INT_MAX, x2 = INT_MIN, y1 = INT_MAX, y2 = INT_MIN;
				for(int l = 0; l < n; l++){
					if(cor[l] == v[i] || cor[l] == v[j] || cor[l] == v[k]){
						continue;
					}
					x1 = min(x1, cor[l].first);
					x2 = max(x2, cor[l].first);
					y1 = min(y1, cor[l].second);
					y2 = max(y2, cor[l].second);
				}
				ans = min(ans, (x2 - x1) * (y2 - y1));
			}
		}
	}
	cout << ans;
	return 0;
}
