#include<iostream>
using namespace std;
int main(){
	int a,b,choice;
	cout<<"What you want to print?---1)Rectangle or 2)square"<<endl;
	cin>>choice;
	if(choice==1){
		cout<<"You want to print rectangle, put value of length & width,respectively"<<endl;
		cin>>a>>b;
		cout<<"Length of rectangle is "<<a<<", Width of rectangle is "<<b<<endl;
	}
	else{
		cout<<"You want to print square, put length of side"<<endl;
		cin>>a;
		b=a;
		cout<<"Length of side of square is "<<a<<endl;	
	}
for(int i=1;i<=a;i++){
	for(int j=1;j<=b;j++){
		cout<<"*";
	}
	cout<<endl;
}
return 0;
}
