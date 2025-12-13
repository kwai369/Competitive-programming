// Problem statement can be found on the link below.
// https://open.kattis.com/problems/basketballoneonone

// Solution 1
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count_a = 0, count_b = 0;
    for(int i=0;i<int(s.length());i+=2){
        if(s[i] == 'A'){
            if(s[i+1] == '1'){
                count_a++;
            }
            if(s[i+1] == '2'){
                count_a += 2;
            }
        }
        if(s[i] == 'B'){
            if(s[i+1] == '1'){
                count_b++;
            }
            if(s[i+1] == '2'){
                count_b += 2;
            }
        }
    }
    if(count_a > count_b){
        cout << "A" << endl;
    }
    else{
        cout << "B" << endl;
    }
    return 0;
}

// Solution 2
#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s[s.size() - 2];
}
