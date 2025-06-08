// Print "odd" if the input is odd, otherwisee print "even".


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a num : ";
    cin>>num;
    if(num%2==0){
        cout<<"The given num is Even.";
    }
    else{
        cout<<"The given num is Odd.";
    }
    return 0;
}