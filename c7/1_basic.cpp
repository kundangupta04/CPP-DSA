#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4};

    // cout<<sizeof(array)<<endl;
    // cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size = sizeof(array[0]);

    // for loop
    for(int idx=0; idx<size; idx++){
        // cout<<array[idx]<<" ";
    }
    cout<<endl;

    //for each loop
    for(int ele:array){
        // cout<<ele<<" ";
    }
    cout<<endl;

    // while loop
    int index = 0;
    while(index<size){
        // cout<<array[index]<<" ";
        index++;
    }
    cout<<endl;

    // for loop 
    char vowels[5];
    for(int idx=0;idx<5; idx++){
        cin>>vowels[idx];
    }
    for(int idx=0;idx<5; idx++){
        cout<<vowels[idx]<<" ";
    }
    cout<<endl;

    // for each loop
    for(char &element: vowels){
        // cin>>element;
    }

    for(int idx=0; idx<5; idx++){
        // cout<<vowels[idx]<<" ";
    }

    

    return 0;
}