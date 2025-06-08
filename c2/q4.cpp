// Design a calculator to perform basic arithmetic operations(+,-,/,*,%)

#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter 2 integers : ";
    cin>>n1>>n2;

    char op;
    cout<<"Enter an operator(+,-,*,/,%) : ";
    cin>>op;

    switch(op){
        case '+':
        cout<<"Sum is : "<<n1+n2<<endl;
        break;
        case '-':
        cout<<"Difference is : "<<n1-n2<<endl;
        break;
        case '*':
        cout<<"Product is : "<<n1*n2<<endl;
        break;
        case '/':
        cout<<"Division is : "<<n1/n2<<endl;
        break;
        case '%':
        cout<<"Remainder is : "<<n1%n2<<endl;
        break;
    }
    return 0;
}