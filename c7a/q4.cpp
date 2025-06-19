// Given a vector arr[] sorted in increasing order. Return an array of squares of each number sorted in increasing order. Where size of vector 1<size<101.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sortedSquares(vector<int> &arr){
    int n= arr.size();
    vector<int> result(n);

    int left = 0, right = n-1;
    int pos = n-1;

    while(left<=right){
        if(abs(arr[left])>abs(arr[right])){
            result[pos] = arr[left]*arr[left];
            left++;
        }
        else{
            result[pos] = arr[right]*arr[right];
            right--;
        }
        pos--;
    }
    return result;
}
int main(){
    vector<int> arr = {-7, -3, 0, 2, 5};
    vector<int> result = sortedSquares(arr);
    for(int num: result){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}