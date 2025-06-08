// print this

//       1
//     2   2
//   3       3
// 4 4 4 4 4 4 4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=(i*2-1); j++){
            if(i==1 || j==1 || i==n || j==(i*2-1)){
                cout<<i<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}