// Given an array of integers of size n. Answers q queries where you need to print the sum of values in a given range of indices from l to r (both included).

// Note: The values of l and r in queries follow 1-based indexing.

// index -> 0  1  2  3  4  5
// vector-> 0 x1 x2 x3..

// 0 based indexing -> 0 ... ... ... n-1
// 1 based indexing -> 1 ... ... ... n


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n+1, 0);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    //calculate prefix sum array
    for(int i=1; i<=n; i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;

    while(q--){
        int l, r;
        cin>>l>>r;
        int ans=0;
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }
    
    return 0;
}