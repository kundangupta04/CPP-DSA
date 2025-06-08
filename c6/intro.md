# Function

> logical set of code --> perform a specific task
> input --> parameters

int main(){
    // code
    return 0;
}

>> Function are important because...
--> reusability,
--> DRY principle (Don't Repeat Yourself),
--> easy to read.

>> Types of Functions
1. User-defined Functions:
2. Standard Libary Functions (built-in-function)

>>> How to declare user-defined Function:-

    return_type function_name (parameter1, parameter2, ...){
        statements ;
    }

>>> Call a Function:
To call a Function in c++, you have to write the Function's name followed by two paranthese() and a semicolon;

>>> Function Prototype
If we want to define a function after the function call, we need to use the function prototype.


> Standard library Function
>> pow(a, b) --> a raise to power b.
>> sqrt(a) --> square root of a.

--> a function is a black-box, which takes some input and produce an output after processing.

--> a function is a block of code or group of statements grouped together to perform a certain task.

// Return type --> It defines the data type and value returned from a function. If we want the function to return a value, we can use a data type(int, float, etc.).
In case function doesn't return anything, we can use void.

// Function name --> Each function has it's own name for easy identification.



# Scope of variables in C++
> Global scope --> variables that are outside all blocks or functions in a program, and they can be accessed any where in the program.

> Local scope --> variables that are inside a function block and can be accessed inside it only. They are unknown entities outside the block.

>> Local variable is more preferable than global variable (if local variable is available). 

# Formal Parameters and Actual Parameters

>Formal parameter -->  variables defined in the function declaration or definnition. example [ def add(x,y) ] .--> x and y are formal parameters 

>Actual parameter --> values or variables passed to the function when it is called. example [ add(5,10) ] .--> 5 and 10 are actual parameters


# Pass by Value and Pass by Reference
>> pass by value --> parameters values are copied to another variables.
>> pass by reference --> parameters values are passed. for reference use "&" ampercend character.


# Default Parameter Value

>> It is a value in the function declaration automatically assigned by the compiler if the calling function does not pass any value to that argument.