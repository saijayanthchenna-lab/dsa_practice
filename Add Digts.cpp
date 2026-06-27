#include <iostream>
using namespace std;

void digitsum(int n){
	int sum;
	while(n!=0){
		int dig=n%10;
		n=n/10;
		sum+=dig;
	}
	cout<<"sum of the number:"<<sum<<endl;
}

int main(){
	cout<<"Enter number to find out sum:";
	int n;
	cin>>n;
	digitsum(n);
	
}
