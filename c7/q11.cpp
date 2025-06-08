// Find the second largest element in the given array.

#include<iostream>
using namespace std;

int largestElement_index(int array[], int size){
    int max = INT16_MIN;
    int maxIndex = -1;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main(){
    int array[] = {2,3,5,7,7,6,1};
    int size = sizeof(array)/sizeof(array[0]);
    int largestEle_Index = largestElement_index(array, size);
    
    int largestElement = array[largestEle_Index];
    for(int i=0; i<size; i++){
        if(array[i] == largestElement){
            array[i] = -1;
        }
    }

    int secondLargestEle_Index = largestElement_index(array, size);

    cout<<array[secondLargestEle_Index];

    
    return 0;
}