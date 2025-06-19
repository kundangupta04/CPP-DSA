// Given an arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x.

#include <iostream>
#include <vector>
using namespace std;
bool hasPairWithDifference(const vector<int>& arr, int x){
    int left =0, right =1;
    int n=arr.size();

    while(right<n && left<n){
        int diff=arr[right]-arr[left];

        if(left != right && diff == x){
            cout<<"Pair found: ("<<arr[left]<<", "<<arr[right]<<")"<<endl;
            return true;
        }
        else if(diff<x){
            right++;
        }
        else{
            left++;
        }
    }
    cout<<"No pair found with difference "<<x<<endl;
    return false;
}
int main(){
    vector<int> arr={1,3,5,8,10};
    int x=5;
    hasPairWithDifference(arr,x);
    return 0;
}