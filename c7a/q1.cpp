// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.

#include <iostream> 
#include <vector> 
using namespace std;
int main(){
    vector<int> arr1 = {1,3,15,17};
    vector<int> arr2 = {2,4,6,8,9};

    int m =arr1.size();
    int n =arr2.size();

    vector<int> merged(m+n);
    int i=0,j=0,k=0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j])
            merged[k++]=arr1[i++];
            else
            merged[k++]=arr2[j++];
    }

    while(i<m)
            merged[k++]=arr1[i++];
    
    while(j<n)
            merged[k++]=arr2[j++];

    cout<<"Merged array: ";
    for(int x : merged)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}