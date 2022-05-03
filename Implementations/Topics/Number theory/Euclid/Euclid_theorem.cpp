/**
  * Description : This is euclid's algorithm for finding gcd.
  * Source : AoPS Intro to number theory.
  */

int a,b;
cin >> a >> b;
while(a!=b){
	if(a>b){
		swap(a,b);
	}
	b -= a;
}
cout << a;
