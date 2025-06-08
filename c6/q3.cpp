// Given age of a person, write a function to check if the person is eligible to vote or not.

#include<iostream>
using namespace std;
int eligible(int n){
    if(n>=18){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int n;
    cout<<"Enter age : ";
    cin>>n;
    eligible(n);
    return 0;
}