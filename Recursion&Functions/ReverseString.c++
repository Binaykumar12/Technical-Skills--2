#include<iostream>
using namespace std;

string reverseString(string s){
    if(s.empty())return "";

    
   
    return reverseString(s.substr(1))+s[0];

}

int main(){
    string s;
    cout<<"Enter the string to reverse: ";
    cin>>s;

    cout<<"The reversed string of "<<s<<" is : "<<reverseString(s);
}