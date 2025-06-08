// Check if the given array is sorted or not.

#include<iostream>
using namespace std;
int main(){
    int array [] = {1,2,31,4,5,6};
    bool sortedFlag = true;
    for(int i=1; i<6; i++){
        if(array[i]<=array[i-1]){
            sortedFlag=false;
        }
    }
    cout<<sortedFlag; // 0 = false
    return 0;
}