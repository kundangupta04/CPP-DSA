// Rectangular pattern

// ************
// ************
// ************
// ************

#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of row : ";
    cin>>r;
    cout<<"Enter no. of coloumn : ";
    cin>>c;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}