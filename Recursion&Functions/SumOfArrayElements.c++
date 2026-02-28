#include<iostream>
using namespace std;

int SumOfArrayElements(int arr[],int n){
  
    if(n<=0)return 0;

    return arr[n-1]+SumOfArrayElements(arr,n-1);
}

int main(){
    int n;
    cin>>n;


    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<SumOfArrayElements(arr,n);
}