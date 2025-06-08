// Count the number of digits for a given number n.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num : ";
    cin>>n;

    int digits=0;

    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<"The no. of Digits = "<<digits;
    return 0;
}