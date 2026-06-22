#include<iostream>
using namespace std;

int main(){
	int a[]={4,1,5,2,3};
	int n=5;

	for(int i=0;i<n-1;i++){
		bool isswap=false; 
		for(int j=0;j<n-i-1;j++){
			
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				isswap=true;
		}
		if(!isswap){
			exit;
		}
	}
}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
//time complexity is n^2(n square)
