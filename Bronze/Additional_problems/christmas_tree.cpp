#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		double d, h;
		cin >> n >> d >> h;
		vector<double> y(n);
		for(int i = 0; i < n; i++){
			cin >> y[i];
		}
		double ans = 0, ar = (d * h) / 2.0;
		for(int i = 0; i < n-1; i++){
			if(y[i+1] < y[i] + h){
				double oh = (y[i] + h) - y[i + 1];
				double ob = d * (oh / h);
				double oar = (oh * ob) / 2.0;
				ans += (ar - oar);
			}
			else{
				ans += ar;
			}
		}
		ans += ar;
		cout << fixed << setprecision(10) << ans << "\n";
	}
	return 0;
}
