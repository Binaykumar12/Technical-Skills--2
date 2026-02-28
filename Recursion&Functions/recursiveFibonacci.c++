#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 ||n==1)return 0;
    if(n==2)return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The Fibonacci number at position "<<n<<" is " << fibonacci(n);
}