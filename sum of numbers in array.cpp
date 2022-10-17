#include<iostream>
using namespace std;
//sum of numbers in array
int main(){
	int size,k;
	cout<<"put how many number you want to put(max. 1L)"<<endl;
	cin>>size;
	int box[100000];
	for(int i=0;i<size;i++){
		cin>>box[i];
	}
	for(int i=0;i<size;i++){
		k=k+box[i];
	}
	cout<<"Sum is = "<<k<<endl;
	 return 0;
}
