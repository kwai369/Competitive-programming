#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("traffic");
	int n;
	cin >> n;
	vector<string> loc(n);
	vector<int> x(n),y(n);
	for(int i=0;i<n;i++){
		cin >> loc[i] >> x[i] >> y[i];
	}
	int start = -999999,end = 999999;
	for(int i=n-1;i>=0;i--){
		if(loc[i] == "none"){
			start = max(start,x[i]);
			end = min(end,y[i]);
		}
		else if(loc[i] == "on"){
			start -= max(x[i],y[i]);
			end -= min(x[i],y[i]);
			start = max(0,start);
			end = max(0,end);
		}
		else{
			start += min(x[i],y[i]);
			end += max(x[i],y[i]);
			start = max(0,start);
			end = max(0,end);
		}
	}
	cout << start << " " << end << "\n";
	start = -999999,end = 999999;
	for(int i=0;i<n;i++){
		if(loc[i] == "none"){
			start = max(start,x[i]);
			end = min(end,y[i]);
		}
		else if(loc[i] == "on"){
			start += min(x[i],y[i]);
			end += max(x[i],y[i]);
			start = max(0,start);
			end = max(0,end); 
		}
		else{
			start -= max(x[i],y[i]);
			end -= min(x[i],y[i]);
			start = max(0,start);
			end = max(0,end);
		}
	}
	cout << start << " " << end;
}
