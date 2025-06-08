#include <iostream>
using namespace std;

string name = "Sanket"; //global 

void fun1 (){
    cout<<name<<endl;
}

void fun2(){
    int x = 10;
    for(int y=0; y<5; y++){
        x=x+y;
        int z = x*y;
    }
    // cout<<x<<" "<<y<<" "<<z<<endl; // y and z are not accessable (local)

    {
        int d=123;
    }
    // cout<<d; // d is not accessable (loca l)
}

int main(){
    cout<<name<<endl;
    name = "Piyush";
    fun1();
    // cout<<x; // x is no accessable (local)
    return 0;
}