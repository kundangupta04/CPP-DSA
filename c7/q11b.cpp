// method 2

#include<iostream>
using namespace std;

int secondLargestElement(int array[], int size){
    int max=INT16_MIN;
    int second_max = INT16_MIN;

    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    for(int i=0; i<size; i++){
        if(array[i]>second_max && array[i]!=max){
            second_max = array[i];
        }
        
    }
    return second_max;
}

int main(){
    int array[]={1,3,4,65,7,89, 89,11,32,9};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"Second largest element : "<<secondLargestElement(array, size);
    return 0;
}