#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void BinarySearch(int arr[],int key,int low,int high){
    int mid=(low+high)/2;
    if(arr[mid]==key){
        cout<<"Key is at "<<mid<<endl;
    }else if(arr[mid]>key){
        high=mid-1;
        BinarySearch(arr,key,low,high);
    }else{
        low=mid+1;
        BinarySearch(arr,key,low,high);
    }
}
int main(){
    int arr[5]={5,4,7,26,78};
    sort(arr,arr+5);
    int low=0;
    int high=4;
    BinarySearch(arr,26,low,high);
    
}
