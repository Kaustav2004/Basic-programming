#include<iostream>
using namespace std;
//sum of numbers in array
int main(){
	int size,k;
	cout<<"you can put max. 10 numbers"<<endl;
	int box[10];
	for(int i=0;i<=10;i++){
		cin>>box[i];
	}
	for(int i=0;i<=10;i++){
		k=k+box[i];
	}
	cout<<"Sum is = "<<k<<endl;
	 return 0;
}
