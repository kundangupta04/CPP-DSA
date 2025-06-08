// Count the number of occurrences of particular element x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    for(int i=0;i<6; i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x: ";
    cin>>x;

    int occurrence = 0;

    // METHOD-1;
    // for(int i=0; i<v.size(); i++){
        //     if(v[i]==x){
            //         occurrence++;
            //     }
            // }

    // METHOD-2;
    for(int ele:v){
        if(ele==x){
            occurrence++;
        }
    }
    cout<<"Occurrence = "<<occurrence;
    return 0;
}