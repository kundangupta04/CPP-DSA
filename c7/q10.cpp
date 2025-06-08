// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,1,3,2,4,1};
    for(int i=0;i<sizeof(array)/sizeof(array[0]); i++){
        for(int j=i+1; j<sizeof(array)/sizeof(array[0]); j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }    

    int unique = 0;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        if(array[i]>0){
            unique = array[i];
        }
    }
    cout<<"Unique num = "<<unique;
    return 0;
}