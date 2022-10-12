#include<iostream>
using namespace std;
/* Print---
1
12
123
1234
12345      */
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
}	
}
