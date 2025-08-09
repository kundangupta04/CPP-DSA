// nth number of Fibonacci series.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n==0 || n==1) return n;

    int a=0;
    int b=1; 
    int c=1;
    for(int i=2; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;

    // Space --> O(1)
    // Time --> O(n)
    return 0;
}