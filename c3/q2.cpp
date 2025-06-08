// Write a program to divide people into 3 age groups depemding upon their age.

// Bellow 12 --> Child
// Between 12 and 18 --> Teenager
// Above 18 --> Adult

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age<12){
        cout<<"Child";
    }
    else if(age>=12 && age<18){
        cout<<"Teenager";
    }
    else{
        cout<<"Adult";
    }
    return 0;
}