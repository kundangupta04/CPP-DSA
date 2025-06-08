// Print the sum of the first natural numbers, where n is the input.

#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    int sum = 0;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout<<"sum : "<<sum;
    return 0;
}