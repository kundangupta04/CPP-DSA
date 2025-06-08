#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a, b;
    cout<<"Enter num1 : ";
    cin>>a;
    cout<<"Enter num2 : ";
    cin>>b;

    cout<<"Sum = "<<add(a,b);
    
    return 0;
}