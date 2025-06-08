// Find the last occurrence of an element x in a given array.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    for(int i=0; i<6; i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter x: ";
    cin>>x;

    int occurence=-1;
    //METHOD-1
    for(int i=0; i<=v.size(); i++){ // traversing from starting point
        if(v[i]==x){
            occurence=i;
        }
    }
    
    //METHOD-2
    // for(int i=v.size()-1; i>=0; i--){  // traversing from ending point
    //     if(v[i]==x){
    //         occurence=i;
    //         break;
    //     }
    // }
    cout<<occurence<<endl;
    return 0;

    // 48:15
}