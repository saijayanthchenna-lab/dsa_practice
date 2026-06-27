#include<iostream>
using namespace std;

bool isArmstrong(int n){
	int sum=0;
	int cop=n;
	
	while(n!=0){
		int dig=n%10;
		sum+=dig*dig*dig;
		n=n/10;
	}
	if(cop==sum){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	cout<<"Enter number to check armstrong or not:";
	int n;
	cin>>n;
	if(isArmstrong(n)){
		cout<<"Armstrong number";
	}
	else{
		cout<<"Not armstrong number";
	}
}
