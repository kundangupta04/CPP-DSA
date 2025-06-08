// WAP to print alphabet diamond pattern.
// int n = 4;

//      A
//    A B C
//  A B C D E
//A B C D E F G
//  A B C D E
//    A B C
//      A 

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=(i*2)-1; j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=(n*2-1)-(i*2); j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }

    return 0;
}