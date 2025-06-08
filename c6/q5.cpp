// Given two numbers a and b, write a program to print all the prime numbers present between a and b.

#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0) return false;
    }
    return true;
}

int main(){
    int a = 2 , b = 500;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}