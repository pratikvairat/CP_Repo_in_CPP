#include<iostream>
using namespace std;
//Quick Sort Algorithm
//swap function to swap the elements
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int partion(int arr[],int low,int high){
    int v=arr[low];
    int i=low;
    int j=high+1;
    do{
        do{
            i++;
        }while(arr[i]<v && i<=high);
        do{
            j--;
        }while(v<arr[j]);
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    arr[low]=arr[j];
    arr[j]=v;
    return j;
    
}
//high is highest index in array
//low is lowest index in array
void QuickSort(int arr[],int low,int high){
    if(low<high){
        //Partition function to select pivot element
        int pivot=partion(arr,low,high);
        QuickSort(arr,low,pivot-1);
        QuickSort(arr,pivot+1,high);
    }
}
int main(){
    int arr[5]={778,98,97,97,16};
    QuickSort(arr,0,4);
    cout<<"Sorted array is : \n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
