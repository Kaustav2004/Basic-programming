#include<iostream>
using namespace std;
/* Print---
1
23
456
78910
11121314    */
int main(){
	int n;
	cin>>n;
	int k=1;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
					cout<<k;
					k++;
			}
		
			cout<<endl;
}
}

