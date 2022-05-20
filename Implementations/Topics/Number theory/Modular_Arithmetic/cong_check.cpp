/**
  * Description : Checks whether two integers are congruent or not.
  * Source : Own.
  */

int t;
cin >> t;
while(t--){	
  int a,b,m;
	cin >> a >> b >> m;
	if(b>a){
		swap(a,b);
	}
	if((a-b)%m==0){
		cout << "congruent" << "\n";
	}
	else{
		cout << "incongruent" << "\n";
	}
}
