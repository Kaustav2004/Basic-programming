#include<iostream>
using namespace std;
//impliment of simple calculator using switch
int main(){
	float num1 ,num2;
	cout<<"Enter value of num1 and num2"<<endl;
	cin>>num1>>num2;
	cout<<"Value of num1 and num2 are respectively "<<num1<<" and "<<num2<<endl;
	char function;
	char a,b,c,d;
	cout<<"Choose btw a,b,c & d....a means sum, b means subtraction, c means multiplication, d means division(num1/num2) "<<endl;
	cin>>function;
	switch(function){
		case 'a':
			cout<<"sum of "<<num1<<" and "<<num2<<" is = "<<num1+num2<<endl;
			break;
		case 'b':
			cout<<"subtraction of "<<num1<<" and "<<num2<<" is = "<<num1-num2<<endl;
			break;
		case 'c':
			cout<<"multiplication of "<<num1<<" and "<<num2<<" is = "<<num1*num2<<endl;
			break;
		case 'd':
			cout<<"division of "<<num1<<" and "<<num2<<" is = "<<num1/num2<<endl;
			break;	
	}
}
