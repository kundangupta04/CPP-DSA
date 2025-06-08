> If Statement

if(condition){
    // code
}

-------------------------

> If-else if Statement

if(condition){
    // code
}
else if(){
    // code
}
else if(){
    // code
}
else{
    // code
}

--------------------------------

> Nested if-else Statement

if(condition-1){
    if(condition-2){
    // code
    }
    else{
        // code
    }
}
else{
    // code
}


-----------------------

Logical-and operator &&

Logical-or operator ||

Ternary operator --> short version of if-else

----------------------------

// common misconceptions
> "&" v/s "&&"

The difference between bitwise AND (&) and logical AND (&&) lies in:

1. Operation Level
| Type            | Operator | Operates On             | Description                                                                                               |
| --------------- | -------- | ----------------------- | --------------------------------------------------------------------------------------------------------- |

| **Bitwise AND** | `&`      | Bits (integers, binary) | Compares each bit of two numbers and returns a new number with bits set to 1 **only if both bits are 1**. |

| **Logical AND** | `&&`     | Boolean expressions     | Evaluates **true** if **both** conditions are true; otherwise, returns false.                             |


2. Examples
Bitwise AND (&)
>
let a = 5;      // binary: 0101
let b = 3;      // binary: 0011
let result = a & b;  // 0101 & 0011 = 0001 (1)
console.log(result); // 1

Logical AND (&&)
>
let x = true;
let y = false;
console.log(x && y); // false


3. Short-Circuiting -->

> && short-circuits: If the first operand is false, the second is not evaluated.
> & does not short-circuit: It always evaluates both sides.

Example:
function sayHi() {
  console.log("Hi");
  return true;
}

false && sayHi(); // "Hi" will NOT be printed
false & sayHi();  // "Hi" WILL be printed


4. Use Cases -->

> Use & for bitwise operations (manipulating binary numbers).
> Use && for conditional logic (e.g., in if statements).

