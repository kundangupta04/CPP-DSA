// Count the number of elements strickly greater than value of x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    for(int i=0; i<6; i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;

    int noOfEle=0;
    for(int ele:v){
        if(ele>x){
            noOfEle++;
        }
    }
    cout<<"No. of Elements = "<<noOfEle;
    return 0;
}