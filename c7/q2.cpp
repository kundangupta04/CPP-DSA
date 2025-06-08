// Find the maximum value of all the elements in the array.

#include<iostream>
using namespace std;
int main(){
    int array[]={31,7,18,90,11};

    int max=array[0];
    for(int i=1;i<sizeof(array)/sizeof(array[0]); i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout<<max;
    return 0;
}