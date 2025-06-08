// Rotate the given array 'a' by k steps, where k is non-negative. Note: k can be greater than n as well where n is the size of array 'a'.

#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    int k = 41;

    k=k%size;

    int ansArray[size];
    int j=0;
    for(int i=size-k; i<size; i++){
        ansArray[j++]=array[i];
    }

    for(int i=0; i<=k; i++){
        ansArray[j++] = array[i];
    }

    for(int i=0; i<size; i++){
        cout<<ansArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}