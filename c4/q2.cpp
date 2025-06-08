// Print the first multiple of which is also a multiple of 7.

#include<iostream>
using namespace std;
int main(){

    //while loop
    int i = 5;
    while(true){
        
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5; // i=i+5
    }

    //for loop
    for(int i=5; ; i+=5){
        if(i%7==0){
            cout<<i;
            break;
        }
    }
    return 0;
}