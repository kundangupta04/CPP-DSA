// Find the sum of digits in a given number n.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num : ";
    cin>>n;

    int sum = 0;

    while(n>0){
        int lastDigit = n%10;
        sum=sum+lastDigit;
        n=n/10;
    }
    cout<<"Sum of the digits = "<<sum;
    return 0;
}