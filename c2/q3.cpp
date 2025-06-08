// Write a program to take input from user for Cost Price(C.P.) and Selling Price(S.P.) and calculate Profit and Loss.

#include<iostream>
using namespace std;
int main(){
    int cp, sp, profit, loss;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;

    if(sp<cp){
        loss=cp-sp;
        cout<<"Loss = "<<loss<<endl;
    }
    else if(sp>cp){
        profit=sp-cp;
        cout<<"Profit = "<<profit<<endl;
    }
    else{
        cout<<"NO profit No loss"<<endl;
    }
    return 0;
}