#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(){
	setIO("mowing");
	vector<vector<int>> vec(2000,vector<int>(2000,0));
	int n;
	cin >> n;
	int mini = 1e9,xaxis=1000,yaxis=1000,count=0;
	for(int i=0;i<n;i++){
		char dir;
		int dis;
		cin >> dir >> dis;
		if(dir=='N'){
			for(int j=yaxis;j<yaxis+dis;j++){
				count++;
				if(vec[xaxis][j]){
					mini = min(mini,count-vec[xaxis][j]);
				}
				vec[xaxis][j] = count;
			}
			yaxis += dis;
		}
		else if(dir=='S'){
			for(int j=yaxis;j>yaxis-dis;j--){
				count++;
				if(vec[xaxis][j]){
					mini = min(mini,count-vec[xaxis][j]);
				}
				vec[xaxis][j] = count;
			}
			yaxis -= dis;
		}
		else if(dir=='E'){
			for(int j=xaxis;j<xaxis+dis;j++){
				count++;
				if(vec[j][yaxis]){
					mini = min(mini,count-vec[j][yaxis]);
				}
				vec[j][yaxis] = i;
			}
			xaxis += dis;
		}
		else{
			for(int j=xaxis;j>xaxis-dis;j--){
				count++;
				if(vec[j][yaxis]){
					mini = min(mini,count-vec[j][yaxis]);
				}
				vec[j][yaxis] = i;
			}
			xaxis -= dis;
		}
	}
	if(mini==1e9){
		cout << -1;
	}
	else{
		cout << mini;
	}
}
