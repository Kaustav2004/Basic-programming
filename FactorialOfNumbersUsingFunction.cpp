#include<iostream>
using namespace std;
// factorial of numbers using function
int fact(int a,int q){
	q=1;
	if(a!=0){
	for(int i=a;i>0;i--){
	q=q*i;
}
}
else{
int	p=1;
}
return q;
}
int main(){
	int b;
	cin>>b;
	cout<<b<<"! = "<<fact(b,1)<<endl;
	return 0;
}
