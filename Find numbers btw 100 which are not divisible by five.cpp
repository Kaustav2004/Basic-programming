#include<iostream>
using namespace std;
int main(){
	for(int number=1;number<=100;number++){
		if(number%5==0){
			continue;
		}
		cout<<number<<" is not divisible by 5"<<endl;
	}
	return 0;
}
