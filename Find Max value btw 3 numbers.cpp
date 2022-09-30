#include<iostream>
using namespace std;
//abc acb cab cba bca bac
// Find max. btw three given number 
int main(){
	int a,b,c;
	cout<<"Enter value of a "<<endl;
	cin>>a;
	cout<<"Value of a is "<<a<<endl;
	cout<<"Enter value of b "<<endl;
	cin>>b;
	cout<<"Value of b is "<<b<<endl;
	cout<<"Enter value of c "<<endl;
	cin>>c;
	cout<<"Value of c is "<<c<<endl;
//	condintion
if(a>b && b>c){
	cout<<"Max. number is = "<<a;
}
else if(a>c && c>b){
cout<<"Max. number is = "<<a;
}
else if(c>a && a>b){
	cout<<"Max. number is = "<<c;
}
else if(c>b && b>a){
	cout<<"Max. number is = "<<c;
}
else if(b>c && c>a){
	cout<<"Max. number is = "<<b;
}
else{
	cout<<"Max. number is = "<<b;
}
return 0;
}
