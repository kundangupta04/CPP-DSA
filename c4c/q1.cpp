// WAP to print num diamond pattern.
// int n = 4;

//      1
//    1 2 3
//  1 2 3 4 5
//1 2 3 4 5 6 7
//  1 2 3 4 5
//    1 2 3
//      1 

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
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=(n*2-1)-(i*2); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}