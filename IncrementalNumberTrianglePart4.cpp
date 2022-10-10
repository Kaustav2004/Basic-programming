#include<iostream>
using namespace std;
/* Print---
11111
 2222
  333
   44
    5      */
int main(){
	int n;
	cin>>n;
for(int i=n;i>=1;i--){
	for(int j=n-i;j>0;j--){
		cout<<" ";
	}
	for(int k=n;k>=(n-i+1);k--){
		cout<<(n-i+1);
	}
	cout<<endl;
}	
}
