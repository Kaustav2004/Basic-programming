#include<iostream>
//#include<int>
using namespace std;
int main(){
//	taking input value
int a,b,c;
cout<<"enter value of a =";
cin>>a;
cout<<"value of a = "<<a<<endl;
cout<<"enter value of b =";
cin>>b;
cout<<"value of b = "<<b<<endl;
cout<<"enter value of c =";
cin>>c;
cout<<"value of c = "<<c<<endl;

//if and else codn
 if (a>b && b>c){
cout<<a<<">"<<b<<">"<<c;
}
else if (a>c && c>b){
	cout<<a<<">"<<c<<">"<<b;
}
 else if (c>a && a>b){
	cout<<c<<"<"<<"<"<<a<<"<"<<b;
}
 else if (b>a && a>c){
	cout<<b<<">"<<a<<">"<<"c";
}
else  if (b>c && c>a){
	cout<<"b>c>a";
}
else  if (c>b && b>a) {
	cout<<"c>b>a";
}
else if (a=b && b>c || b<c ){
	cout<<"a=b but c is not equal to a and b";
}
else if (b=c && a>b || a<b ){
	cout<<"c=b but a is not equal to b and c";
}
else if (a=c && b>a || b<a ){
	cout<<"a=c but b is not equal to a and c";
}
else{
cout<<"a=b=c";	
}

return 0;
}
