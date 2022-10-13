#include<iostream>
// Reverse number
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n/10 ;(n/10)>0;n=n/10){
		cout<<(n%10);
	}
	if(n/10==0){
		cout<<n;
	}
	return 0;
	}
