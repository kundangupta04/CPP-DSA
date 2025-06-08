#include<iostream>
#include<math.h>
using namespace std;

int add(int x, int y){
    int result = x+y;
    return result;
}

void fun(string name){
    cout<<"Are u having fun "<<name<<" ?"<<endl;
}
int main(){
    fun("Saket");
    int result = add(9,8);
    cout<<result<<endl;
    cout<<sqrt(result);
    return 0;
}