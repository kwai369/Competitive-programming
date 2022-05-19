/**
  * Description : Implementing dfs through grid(or floodfill).
  * Source : USACO guide.
  * Verification : https://cses.fi/problemset/task/1192
  */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

const int maxn = 1e3;
const int R[]{0,1,0,-1};
const int L[]{1,0,-1,0};

int r,c;
bool vis[maxn][maxn];
string vec[maxn];

void floodfill(int row,int col){
	stack<pair<int,int>> stk;
	stk.push({row,col});
	while(!stk.empty()){
		row = stk.top().first;
		col = stk.top().second;
		stk.pop();
		if(row<0 || row>=r || col < 0 || col >= c || vec[row][col]=='#' || vis[row][col]){
			continue;
		}
		vis[row][col] = true;
		for(int i = 0; i < 4; i++){
			stk.push({row + R[i],col + L[i]});
		}
	}
}

int main(){
	cin >> r >> c;
	for(int i=0;i<r;i++){
		cin >> vec[i];
	}
	int cur = 0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(vec[i][j] == '.' && !vis[i][j]){
				floodfill(i,j);
				cur++;
			}
		}
	}
	cout << cur;
}
