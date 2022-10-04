#include<iostream>
using namespace std;
/* Print --
*****
****
***
**
*          */
int main(){
	int c;
	c=5;
	for(int i=1;i<=c;i++){
		for(int j=5;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
