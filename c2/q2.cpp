// We need to swap two numbers with help of third variable.

#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter num1 : ";
    cin>>a;
    cout<<"Enter num2 : ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;
    cout<<"num1 = "<<a<<endl;
    cout<<"num2 = "<<b;
    return 0;
}