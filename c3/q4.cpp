// WAP to print the day based on the day number.

// 1 --> Monday
// 2 --> Tuesday
// 3 --> Wednesday
// 4 --> Thursday
// 5 --> Friday
// 6 --> Satday
// 7 --> Sunday

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Day number : ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Monday";
        break;
    
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;  
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        cout<<"Please enter a valid Day number.";
        break;
    }
    return 0;
}