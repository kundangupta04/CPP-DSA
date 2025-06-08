#include<iostream>
using namespace std;
int main(){
    int array[] = {3,9,5,1,2,6,11,4,2};
    int key=11;

    int ans = -1;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        if(array[i]==key){
            ans = i;
            break;
        }
    }
    cout<<ans;
    return 0;
}