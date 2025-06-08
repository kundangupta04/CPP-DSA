// Write a program to print the value if it is even  and divisible by 3.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num : ";
    cin>>n;
    if(n%2==0){
        if(n%3==0){
            cout<<"The given number is even and divisible by 3.";
        }
        else{
            cout<<"The given number is Even.";
        }
    }
    else{
        cout<<"The given number is Odd.";
    }
    return 0;
}