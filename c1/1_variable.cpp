// Type variable_name[=value];



// c++ Naming Convention 
//              --> Lowercase (teacontainer)
//              --> Uppercase (TEACONTAINER)
//              --> Camelcase (teaContainer)



// RULES for Naming Variables in C++

//Rule1 --> Variable names should not begin with a number.
//Rule2 --> Whitespace is not permitted in variable names.
//Rule3 --> A C++ keyword(reserved word) cannot be used as a variable name.
//Rule4 --> It is preferred to use variable names with more than one word with all lowercase letters for the first word and capitalization of the first letter of each subsequent word.
//Rule5 --> When craeting variables, it is preferred to give them meaningful names.
//Rule6 --> All lowercase letters should be used when creating one-word variable names.


// C++ Identifiers --> names of class, variables, methods

//Points to remember about identifiers
//Rule1 --> All identifiers should begin with a letter (A to Z or a to z), currency character ($) or an underscore(_).
//Rule2 --> After the first character, identifiers can have any combination of characters.
//Rule3 --> A keyword cannot be used as an identifier.
//Rule4 --> The identifiers are case sensitive.
//Rule5 --> Whitespace is not permitted.


// C++ Data Types

// Primary (built in) --> Integer, Character, Boolean, Floating Point, Double Floating Point, Void, Wide Character
// Derived (from primary) --> Function, Array, Pointer, Reference
// User Defined --> Class, Structure, Union, Enum, TypeDef


// Integer data type --> 4 bytes (1 byte = 8 bits), (ex-> 1)
// Charcter data type --> 1 byte, (ex-> 'a')
// Boolean data type --> 1 byte, (ex-> true/false)
// Floating point data type --> 4 bytes, (ex-> 7.32563963)
// Double Floating point data type --> 8 bytes, (ex-> 15.325639631252859)
// Void data type --> ,(ex-> null/nothing)
// Wide Character data type --> 2 or 4 bytes, (ex-> 'A')
// String data type --> , (ex-> "Apple")



//Taking Input from User

#include<iostream>
using namespace std;
int main(){
    int apples;
    cin>>apples;
    cout<<"Number of apples : "<<apples;
    return 0;
}