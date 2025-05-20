#include<iostream>
using namespace std;
int main(){
    int a=4;
    cout<<sizeof(a)<<endl; // 4

    char name = 'a';
    cout<<sizeof(name)<<endl; // 1

    bool flag;
    a==name ? flag = true : flag = false;
    cout<<flag<<endl; // false --> 0

    cout<<(&a)<<endl; // address

    int c=6;
    cout<<(c++)<<endl;
    int b = 5;
    cout<<(--b)<<endl;
    return 0;
}