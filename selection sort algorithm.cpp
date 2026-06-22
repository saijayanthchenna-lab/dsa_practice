#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[]={4,1,5,2,3};
	int n=5;
	
	for(int i=0;i<n-1;i++){
		int smi=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[smi]){
				smi=j;
			}
		}
		swap(arr[i],arr[smi]);
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
