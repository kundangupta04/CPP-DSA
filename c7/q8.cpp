// Target sum
// Find the total number of pairs in the Array whose sum is equal to the given value of x.

#include<iostream>
using namespace std;
int main(){
    int array[]={3,4,6,7,0,1,5,2,2};
    int targetSum = 5;
    cout<<"targetSum = "<<targetSum<<endl;
    int pairs=0;
    for(int i=0;i<sizeof(array)/sizeof(array[0]); i++){  
        for(int j=i+1;j<sizeof(array)/sizeof(array[0]); j++){
            if(array[i]+array[j]==targetSum){
                cout<<array[i]<<" "<<array[j]<<endl;
                pairs++;
            }
        }
    }
    cout<<"pairs = "<<pairs<<endl;
    return 0;
}