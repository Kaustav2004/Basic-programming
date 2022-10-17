#include<iostream>
using namespace std;
//Reverse alternative
void reverse(int array[],int size){
	int start=0;
	int end=start++;
	while(start>end && start<=(size-1)){
		swap(array[start],array[end]);
		start++;
		start++;
		end++;
		end++;
}
}
void print(int array[],int size){
	for(int i=0;i<=(size-1);i++){
		cout<<array[i]<<" ";
	}
	if(size%2!=0){
		cout<<array[size-1];
	}
	cout<<endl;
}
int main(){
	int arr[4]={7,45,23,6};
	int brr[7]={23,3,2,4,77,12,34};
    reverse(arr,4);
    print(arr,4);
    reverse(brr,7);
    print(brr,7);
    
    return 0;
}
