#include<iostream>
using namespace std;
int main(){
	//taking input
	int value1, value2;
	cout<<"enter value1 ";
		cin>>value1;
		cout<<"value1 = "<<value1<<endl;
		cout<<"enter value2 ";
		cin>>value2;
		cout<<"value2 = "<<value2<<endl;
	//if and else codn
	if (value1>value2){
		cout<<"value1 is greatter than value2";
	}	
	else if(value1<value2){
			cout<<"value1 is lesser than value2";
	}
	else{
		cout<<"value1 is equal to value2";
	}
	
}
