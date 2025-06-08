// Count the number of triplets whose sum is equal to the given value x.

#include<iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,0,9,10,7};
    int targetSum = 18;
    cout<<"target sum = "<<targetSum<<endl;
    int triplets = 0;

    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        for(int j=i-1; j<sizeof(array)/sizeof(array[0]); j++){
            for(int k=j-1; k<sizeof(array)/sizeof(array[0]); k++){
                if(array[i]+array[j]+array[k] == targetSum){
                    cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
                    triplets++;
                }
            }
        }
    }
    cout<<"Triplets = "<<triplets;
    return 0;
}