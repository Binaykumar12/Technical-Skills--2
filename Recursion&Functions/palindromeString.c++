#include<iostream>
using namespace std;

bool palindromeString(string &s,int start,int end){
    if(start>=end)return true;

    if(s[start]!=s[end])return false;

    return palindromeString(s,start+1,end-1);
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    bool value=palindromeString(s,0,s.length()-1);
    cout<<boolalpha<<value;
}