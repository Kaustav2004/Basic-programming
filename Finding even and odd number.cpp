#include<iostream>
using namespace std;
//Finding even and odd number
int main(){
	int a,d;
	cout<<"Enter number "<<endl;
	cin>>a;
	cout<<"You Entered = "<<a<<endl;
    
    d=a%2;
    if (d==0){
    	cout<<"It's a even number";
	}
	else{
		cout<<"It's a odd number";
	}
    return 0;
}
