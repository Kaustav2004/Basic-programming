#include<iostream>
using namespace std;
/* Print this type of pattern---
 1
 22
 333
 4444
 55555    */
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}