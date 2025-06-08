// Print the first n factorial numbers.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num : ";
    cin>>n;

    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *= i;
        cout<<"Factorial of "<<i<<" = "<<factorial<<endl;
    }
    return 0;
}