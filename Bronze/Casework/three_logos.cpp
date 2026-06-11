#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a[2], b[2], c[3];
	cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1];
	char ch[3] = {'A', 'B', 'C'};

	if(a[1] > a[0]){swap(a[1], a[0]);}
	if(b[1] > b[0]){swap(b[1], b[0]);}
	if(c[1] > c[0]){swap(c[1], c[0]);}

	if(a[0] == b[0] && b[0] == c[0]){
		if(a[1] + b[1] + c[1] == a[0]){
			cout << a[0] << "\n";

			for(int i = 0; i < a[1]; i++){
				for(int j = 0; j < a[0]; j++){cout << ch[0];}
				cout << "\n";
			}

			for(int i = 0; i < b[1]; i++){
				for(int j = 0; j < b[0]; j++){cout << ch[1];}
				cout << "\n";
			}

			for(int i = 0; i < c[1]; i++){
				for(int j = 0; j < c[0]; j++){cout << ch[2];}
				cout << "\n";
			}
		}
		else{
			cout << "-1\n";
		}
		return 0;
	}
	
	if(c[0] > b[0]){swap(c[0], b[0]), swap(c[1], b[1]), swap(ch[1], ch[2]);}
	if(b[0] > a[0]){swap(b[0], a[0]), swap(b[1], a[1]), swap(ch[0], ch[1]);}

	int diff = a[0] - a[1];
	if(b[0] == diff){swap(b[0], b[1]);}
	if(c[0] == diff){swap(c[0], c[1]);}

	if(b[0] + c[0] == a[0] && b[1] == diff && c[1] == diff){
		cout << a[0] << "\n";
		for(int i = 0; i < a[1]; i++){
			for(int j = 0; j < a[0]; j++){cout << ch[0];}
			cout << "\n";
		}
		for(int i = 0; i < b[1]; i++){
			for(int j = 0; j < b[0]; j++){cout << ch[1];}
			for(int j = 0; j < c[0]; j++){cout << ch[2];}
			cout << "\n";
		}
		return 0;
	}
	cout << "-1\n";

}
