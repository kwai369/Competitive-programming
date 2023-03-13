/* http://www.usaco.org/index.php?page=viewproblem2&cpid=831 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

bool count(char c,const vector<string> &b){
	for(int i=0;i<3;i++){
		if(b[i][0]==c && b[i][1]==c && b[i][2]==c){
			return true;
		}
		if(b[0][i]==c && b[1][i]==c && b[2][i]==c){
			return true;
		}
	}
	if(b[0][0]==c && b[1][1]==c && b[2][2]==c){
		return true;
	}
	if(b[0][2]==c && b[1][1]==c && b[2][0]==c){
		return true;
	}
	return false;
}

int indivi(const vector<string> &s1){
	int sing = 0;
	for(char ch = 'A';ch<='Z';ch++){
		sing += count(ch,s1);
	}
	return sing;
}

bool check(char ch,char ch1,char x,char y,char z){
	if(x==y && x!=z){
		if(x==ch && z==ch1){
			return true;
		}
		if(x==ch1 && z==ch){
			return true;
		}
	}
	if(x==z && x!=y){
		if(x==ch && y==ch1){
			return true;
		}
		if(x==ch1 && y==ch){
			return true;
		}
	}
	if(y==z && y!=x){
		if(y==ch && x==ch1){
			return true;
		}
		if(y==ch1 && x==ch){
			return true;
		}
	}
	return false;
}

bool count1(char c1,char c2,const vector<string> &s){
	for(int i=0;i<3;i++){
		if(check(c1,c2,s[i][0],s[i][1],s[i][2])){
			return true;
		}
		if(check(c1,c2,s[0][i],s[1][i],s[2][i])){
			return true;
		}
	}
	if(check(c1,c2,s[0][0],s[1][1],s[2][2])){
		return true;
	}
	if(check(c1,c2,s[0][2],s[1][1],s[2][0])){
		return true;
	}
	return false;
}

int c_team(const vector<string> &b1){
	int doub = 0;
	for(char ch = 'A';ch<='Z';ch++){
		for(char ch1 = ch+1;ch1<='Z';ch1++){
			doub += count1(ch,ch1,b1);
		}
	}
	return doub;
}

int main() {
	setIO("tttt");
	vector<string> s(3);
	for(int i=0;i<3;i++){
		cin >> s[i];
	}
	int ind = indivi(s);
	int team = c_team(s);

	cout << ind << "\n" << team;
}

