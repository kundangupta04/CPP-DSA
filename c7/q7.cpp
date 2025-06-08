// Find the difference betweeen the sum of the elements at even indices to the sum of elements at odd indices.

#include<iostream>
using namespace std;
int main(){
    int array[] = {1,2,31,4,5,6};

    int difference=0;
    for(int i=0;i<6; i++){
        if(array[i]%2==0){
            difference+=array[i];
        }
        else{
            difference-=array[i];
        }
    }
    cout<<difference;
    return 0;
}