// you are given a string S consisting of a list of words; the string contains lowercase alphabets and some special symbols such as(*,$,#). Now, our task is to make the string good, and this is done by removing all the special characters from the sentence. for this, we have to perform two operations - 
// firstly, choose the special symbol in the given sentence.
// in the second step, remove the right of that special character.
 // Input Format - 
 // The first and only line of the input contains the string S.

 // Output Format - 
 // Print the excellent sentence obtained after performing the operations.



#include<iostream>
#include<string>
using namespace std;

bool isSpecial(char ch){
    return ch == '*' || ch == '$' || ch == '#';
}

string makeGoodString(const string &s){
    string result = "";
    for(char ch : s){
        if(!isSpecial(ch)){
            result += ch;
        }
    }
    return result;
}

int main(){
    string S;
    getline(cin,S);

    string goodSentence = makeGoodString(S);
    cout<<goodSentence<<endl;
    return 0;
}