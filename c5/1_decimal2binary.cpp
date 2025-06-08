// Decimal to binary

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num : ";
    cin>>n;

    int ans=0;
    int power=1;
    while(n>0){
        int paritydigit = n%2;
        ans+= paritydigit*power;
        power*=10;
        n/=2;
    }
    cout<<"Binary digit = "<<ans;
    return 0;
}