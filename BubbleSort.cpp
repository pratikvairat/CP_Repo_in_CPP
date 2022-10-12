#include <iostream>

using namespace std;

//Bubble Sort 

void Swap(int m,int n){

    int temp;

    temp=m;

    m=n;

    n=temp;

}

void BubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){

            if(arr[j]>=arr[j+1]){

                swap(arr[j],arr[j+1]);

            }

        }

    }

}

int main(){

    int x;

    cout<<"Enter Size of Array\n";

    cin >> x;

    int a[x];

    cout<<"Enter Elements of array\n";

    for(int i=0;i<x;i++){

        cin>>a[i];

    }

    BubbleSort(a,x);

    cout<<"Your Sorted Array is\n";

    for(int i=0;i<x;i++){

        cout<<a[i]<<" ";

    }

}

#include <iostream>

using namespace std;

//Bubble Sort 

void Swap(int m,int n){

    int temp;

    temp=m;

    m=n;

    n=temp;

}

void BubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){

            if(arr[j]>=arr[j+1]){

                swap(arr[j],arr[j+1]);

            }

        }

    }

}

int main(){

    int x;

    cout<<"Enter Size of Array\n";

    cin >> x;

    int a[x];

    cout<<"Enter Elements of array\n";

    for(int i=0;i<x;i++){

        cin>>a[i];

    }

    BubbleSort(a,x);

    cout<<"Your Sorted Array is\n";

    for(int i=0;i<x;i++){

        cout<<a[i]<<" ";

    }

}

