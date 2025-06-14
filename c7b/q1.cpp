// Sort an Array consisting of only 0s and 1s.

#include<iostream>
#include<vector>
using namespace std;
void sotrZerosAndOnes(vector<int> &v){
    int zeroes_count = 0;

    for(int ele: v){
        if (ele == 0){
            zeroes_count++;
        }
    }

    for(int i=0; i<v.size(); i++){
        if(i<zeroes_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
int main(){

    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sotrZerosAndOnes(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0; 
}