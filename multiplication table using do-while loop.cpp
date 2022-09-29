#include<iostream>
using namespace std;
int main(){
	int i1;
	cout<<"Enter value of i1 "<<endl;
	cin>>i1;
	cout<<"Value of i1 = "<<i1<<endl;
//	multiplication table using do-while loop
cout<<"multiplication of "<<i1<<" as follows"<<endl;
int i2=1;
do{
	cout<<i1<<"*"<<i2<<"="<<i1*i2<<endl;
	i2++;
}
 while(i2<=10);
	return 0;
}
