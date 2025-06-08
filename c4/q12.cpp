// print this

// 1 2 3 4 5 6
// 1         6
// 1         6
// 1 2 3 4 5 6

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of row : ";
    cin>>n;
    cout<<"Enter no. of column : ";
    cin>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}