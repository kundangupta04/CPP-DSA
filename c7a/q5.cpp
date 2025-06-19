//Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exists in the array whose absolute sum is exactly x.

#include<iostream>
#include<vector>
using namespace std;
int countPairsWithDiff(vector<int> &arr, int x){
    int n=arr.size();
    int count = 0;
    int left = 0, right = 1;

    while(right<n){
        int diff=arr[right]-arr[left];

        if(left== right || diff<x){
            right++;
        }
        else if(diff>x){
            left++;
        }
        else{
            count++;
            int currLeft = arr[left];
            int currRight = arr[right];
            while(left<n && arr[left]== currLeft) left++;
            while(right<n && arr[right]== currRight) right++;
        }
    }
    return count;
}
int main(){
    vector<int> arr  = {1,3,3,5,8,10};
    int x = 2;

    int result = countPairsWithDiff(arr, x);
    cout<<"Number of unique pairs with difference "<<x<<" is : "<<result<<endl;
    return 0;
}