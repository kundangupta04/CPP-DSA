// Give radius of a circle. Write a function to print the area and circumference of the circle.

#include<iostream>
using namespace std;

float circle(int r){
    cout<<"Area =  "<<(3.1415*r*r)<<endl;
    cout<<"Circumference =  "<<(2*3.1415*r)<<endl;
}

int main(){
    int r;
    cout<<"Enter radius of the circle : ";
    cin>>r;
    circle(r);
    return 0;
}