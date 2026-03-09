#include<bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

set<char> one;
set<pair<char, char>> team;

void row(vector<string>& s){
	for(int i = 0; i < 3; i++){
		set<char> c;
		for(int j = 0; j < 3; j++){
			c.insert(s[i][j]);
		}
		if(int(c.size()) == 1){
			one.insert(*c.begin());
		}
		if(int(c.size()) == 2){
			team.insert(make_pair(*(c.begin()), *(c.rbegin())));
		}
	}
}

void col(vector<string>& s){
	for(int i = 0; i < 3; i++){
		set<char> c;
		for(int j = 0; j < 3; j++){
			c.insert(s[j][i]);
		}
		if(int(c.size()) == 1){
			one.insert(*c.begin());
		}
		if(int(c.size()) == 2){
			team.insert(make_pair(*(c.begin()), *(c.rbegin())));
		}
	}
}

void dia(vector<string>& s){
	set<char> c;
	for(int i = 0; i < 3; i++){
		c.insert(s[i][i]);
	}
	if(int(c.size()) == 1){
		one.insert(*c.begin());
	}
	if(int(c.size()) == 2){
		team.insert(make_pair(*(c.begin()), *(c.rbegin())));
	}
	set<char> c1;
	c1.insert(s[0][2]);
	c1.insert(s[1][1]);
	c1.insert(s[2][0]);
	if(int(c1.size()) == 1){
		one.insert(*c1.begin());
	}
	if(int(c1.size()) == 2){
		team.insert(make_pair(*(c1.begin()), *(c1.rbegin())));
	}
}

int main() {
	setIO("tttt");
	vector<string> str(3);
	for(int i = 0; i < 3; i++){
		cin >> str[i];
	}
	row(str);
	col(str);
	dia(str);
	cout << one.size() << "\n" << team.size();
}
