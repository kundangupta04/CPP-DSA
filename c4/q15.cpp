// Print this 

//          1
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=(i-1); j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}