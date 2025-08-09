// Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
// Input: row = 3, col = 4
// matrix[] = {0,1,1,1},
//            {0,0,0,1},
//            {0,0,1,1}

// Output : 0


// method - 2

#include<iostream>
#include<vector>
using namespace std;

int leftMostOneRow(vector<vector<int>> &V){
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j=V[0].size()-1;

    // finding leftmost one in 0th row
    while(j>=0 && V[0][j]==1){
        leftMostOne=j;
        maxOnesRow = 0;
        j--;
    }

    //check in rest of the rows if we can find a one to leftMostOne
    for(int i=0; i<V.size(); i++){
        while(j>=0 && V[i][j] == 1){
            leftMostOne = j;
            j--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }
    int res = leftMostOneRow(vec);
    cout<<res<<endl;
    return 0;
}
