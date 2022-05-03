/**
  * Description : Checking whether a number is prime or not.
  * Source : Own
  */
  
int n;
cin >> n;
bool ans = true;
for(int i=2;i*i<=n;i++){
	if(n%i==0){
		ans = false;
	}
} 
if(ans){
  cout << "Yes\n";
}	
else{
	cout << "No\n";
}
