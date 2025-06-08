// Given two numbers a and b, write a program using function to print all the odd numbers between them.

#include<iostream>
using namespace std; 

int print(int n, int m){
    for(int i=n; i<=m; i++){
        if(i%2==1){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }
}

int main(){
    int n, m;
    cout<<"Enter two num : ";
    cin>>n>>m;

    print(n,m);
    return 0;
}