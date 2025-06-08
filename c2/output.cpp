#include<iostream>
using namespace std;
int main(){
    // cout<<(4+2+"poi")<<endl;
    // cout<<("poi"+4+2)<<endl;

    // REVISION
    // integer data type
    int apples = 5;
    cout<<apples<<endl;
    cout<<"Size of int: "<<sizeof(apples)<<endl;

    // char data type
    char sign = '&';
    cout<<sign<<endl;
    cout<<"Size of char: "<<sizeof(sign)<<endl;

    // bool data type
    bool flag = false;
    cout<<flag<<endl;
    cout<<"Size of bool: "<<sizeof(flag)<<endl;

    // float data type
    float score = 30.1456;
    cout<<score<<endl;
    cout<<"Size of float: "<<sizeof(score)<<endl;


    // taking input from user
    cout<<"Enter a num : ";
    int num;
    cin>>num;
    cout<<"The entered number is: "<<num;
    return 0;
}