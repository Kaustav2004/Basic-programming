#include<iostream>
using namespace std;
/* Print this type of pattern---
    1
   22
  333
 4444
55555   */
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n;j>i;j--){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}   
