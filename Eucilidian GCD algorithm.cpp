#include <iostream>
using namespace std;

int gcd(int a,int b){
	while(a>0 && b>0){
		if(a>b){
			a=a%b;
		}
		else{
			b=b%a;
		
		}
	}
	if(a==0)return b;
	return a;
}

int main(){
	cout<<"Enter numbers to find gcd:"<<endl;
	cout<<"Number1:";
	int a;
	cin>>a;
	int b;
	cout<<"Number2:";
	cin>>b;
	cout<<"GCD is:"<<gcd(a,b)<<endl;
	
}
