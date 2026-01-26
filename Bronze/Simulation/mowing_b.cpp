#include<bits/stdc++.h>
#define ll long long
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

const int xmax = 2001;
const int ymax = 2001;
int field[xmax][ymax];

int main(){
    setIO("mowing");
	int n;
	cin >> n;
	int mini = 1e9;
    int xaxis = 1000, yaxis = 1000;
    int time = 0;
	for(int i = 0; i < n; i++){
		char dir;
		int dis;
		cin >> dir >> dis;
		if(dir == 'N'){
			for(int j = yaxis; j < yaxis + dis; j++){
				time++;
				if(field[xaxis][j]){
					mini = min(mini, time - field[xaxis][j]);
				}
				field[xaxis][j] = time;
			}
			yaxis += dis;
		}
		else if(dir == 'S'){
			for(int j = yaxis; j > yaxis - dis; j--){
				time++;
				if(field[xaxis][j]){
					mini = min(mini, time - field[xaxis][j]);
				}
				field[xaxis][j] = time;
			}
			yaxis -= dis;
		}
		else if(dir == 'E'){
			for(int j = xaxis; j < xaxis + dis; j++){
				time++;
				if(field[j][yaxis]){
					mini = min(mini, time - field[j][yaxis]);
				}
				field[j][yaxis] = time;
			}
			xaxis += dis;
		}
		else{
			for(int j = xaxis; j > xaxis - dis; j--){
				time++;
				if(field[j][yaxis]){
					mini = min(mini, time - field[j][yaxis]);
				}
				field[j][yaxis] = time;
			}
			xaxis -= dis;
		}
	}
	if(mini == 1e9){
		cout << -1 << endl;
	}
	else{
		cout << mini << endl;
	}
    return 0;
}
