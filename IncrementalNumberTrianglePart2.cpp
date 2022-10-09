#include<iostream>
using namespace std;
/* Print this type of pattern--
11111
2222
333
44
5      */
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
