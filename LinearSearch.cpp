//Linear Search in Array

#include <iostream>
using namespace std;
int LinearSearch(int arr[],int n){
	for(int i=0;i<5;i++){
		if(arr[i]==n){
			return i;
		}	
	}
	return -1;
}
int main(){
	int arr[5]={12,56,45,98,67};
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnter an element to search position in above array\n";
	int d;
	cin>>d;
	int pos=LinearSearch(arr,d);
	if(pos==-1){
		cout<<"Element not found";
	}
	else{
		cout<<"Element is at Position :"<<pos;
	}
}
