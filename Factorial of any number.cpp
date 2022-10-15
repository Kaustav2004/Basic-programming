#include<iostream>
using namespace std;
// Calculate factorial of any number
int main(){
	int n;
	cin>>n;
	int fact=1;
	if(n!=0){
	for(int i=n;i>0;i--){
		fact=fact*i;
		}
		cout<<n<<"! = "<<fact<<endl;
	}
	else{
		cout<<n<<"! = "<<1<<endl;
	}
	return 0;
}
