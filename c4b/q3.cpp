// Reverse the digits of a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num : ";
    cin>>n;

    int lastDigit, reverse=0;
    while(n>0){
        lastDigit = n%10;
        reverse = (reverse*10)+lastDigit;
        n= n/10;
    }
    cout<<"Reverse = "<<reverse;
    return 0;
}