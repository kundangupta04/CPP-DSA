#include<iostream>
using namespace std;

int fun(int x, int y=9, int z=11){
    cout<<x<<" "<<y<<" "<<z<<endl;
}

int main(){
    fun(10);
    fun(10,20);
    fun(10,20,30);
    return 0;
}