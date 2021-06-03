# Functions in C++

A function is a block of code that performs a specific task.

- If some functionality is performed at multiple places in software, then rather than writing the same code, again and again, we create a function and call it everywhere. This helps reduce code redundancy.
- Functions make maintenance of code easy as we have to change at one place if we make future changes to the functionality.
- Functions make the code more readable and easy to understand.

<b>Syntax</b>

```
return-type function_name (parameter 1, parameterϮ ...... parameter n)
{
    //function_body
}
```

<b>return-type</b>
The return type of a function is the data type of the variable that that function returns.
For eg. if we write a function that adds 2 integers and returns their sum then the return type of this function will be ‘int’ as we will returning sum that is an integer value.
When a function does not return any value, in that case the return type of the function is ‘void’.
<br/>
<b>function_name</b>
It is the unique name of that function.
It is always recommended to declare a function before it is used.
<br/>
<b>Parameters</b>
A function can take some parameters as inputs. These parameters are specified
along with their data types.
For eg. if we are writing a function to add 2 integers, the parameters would be
passed like –
int add (int num1, int num2)
<br />
<b>Main function<b>
The main function is a special function as the computer starts running the code
from the beginning of the main function. Main function serves as the entry
point for the program.

# Questions

1. [Add 2 numbers using functions](./addTwo.cpp)
2. [Print all prime numbers between 2 given numbers](./prime2.cpp)
3. [Print Fibonacci sequence](./fibonacci.cpp)
4. [Factorial of a given number](./factorial.cpp)
5. [Find the binary coefficient nCr](./binaryCoef.cpp)
6. [Pascal triangle](./pascalTriangle.cpp)
7. [Find out whether a given number is even or odd using functions](./evenOdd.cpp)
8. [Find out whether a given character is an alphabet or not using functions](./isAlphabet.cpp)
9. [Print the maximum and the minimum number respectively among three numbers entered by user](./minMax.cpp)
10. [Swap the values of 2 given integer variables.](./swap.cpp)
11. [Check if a person is eligible for voting or not by comparing his age with legal voting age](./voting.cpp)
12. [Sum of first n natural number](./sumNatural.cpp)
13. [Check if a set of three numbers is a pythagorean triplet](./pythagoreanTriplet.cpp)
14. [Convert Number Systems between binary, octal and hexadecimal](./numberSystem.cpp)
15. [FInd the sum of two binary numbers](./addTwoBinary.cpp)
