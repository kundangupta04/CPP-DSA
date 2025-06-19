// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is excatly x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {-13,1,2,4,6,8,9};
    int x = 10;

    int left = 0;
    int right = arr.size() -1;
    bool found = false;

    while(left<right){
        int sum=arr[left] + arr[right];

        if(sum == x){
            cout<<" Pair found: ("<<arr[left]<<", "<<arr[right] <<")"<<endl;
            found = true;
            break;
        }
        else if(sum<x){
            left++;
        }
        else{
            right --;
        }

        if (!found) {
            cout<<"No such pair found."<<endl;
        }
    }

    return 0;
}