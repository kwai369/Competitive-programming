#include<bits/stdc++.h>
using namespace std;

vector<string> animals = {"Ox", "Tiger", "Rabbit", 
		"Dragon", "Snake", "Horse", "Goat", "Monkey", 
		"Rooster", "Dog", "Pig", "Rat"};
	
int find(string s){
	for(int i = 0; i < 12; i++){
		if(animals[i] == s){
			return i;
		}
	}
}

int main() {
	int n;
	cin >> n;
	map<string, pair<string, int>> relation;
	relation["Bessie"].first = "Ox";
	relation["Bessie"].second = 0;
	for(int i = 0; i < n; i++){
		string str[8];
		for (int j = 0; j < 8; j++){
			cin >> str[j]; 
		}
		if(str[3] == "previous"){
			int count = 1;
			int j = (find(str[4]) + 1) % 12;
			string sub = animals[j];
			while(sub != relation[str[7]].first){
				count++;
				j = (j + 1) % 12;
				sub = animals[j];
			}
			relation[str[0]].first = str[4];
			relation[str[0]].second = relation[str[7]].second - count;
		}
		else{
			int count = 1;
			int j = (find(relation[str[7]].first) + 1) % 12;
			string sub = animals[j];
			while(sub != str[4]){
				count++;
				j = (j + 1) % 12;
				sub = animals[j];
			}
			relation[str[0]].first = str[4];
			relation[str[0]].second = relation[str[7]].second + count;
		}
	}
	cout << abs(relation["Elsie"].second) << "\n";
}
