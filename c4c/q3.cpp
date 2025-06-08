// WAP to print + pattern given bellow.

//      *
//      *
//  * * * * *
//      *
//      *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-1; j++){
            cout<<"  ";
        }
        for(int j=1; j<=1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=1; i<=(n*2)-1; i++){
        cout<<"* ";
    }
    cout<<endl;

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-1; j++){
            cout<<"  ";
        }
        for(int j=1; j<=1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}