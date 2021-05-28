# Operators in C++

Operators are nothing but symbols that tell the compiler to perform some
specific operations. Operators are of the following types

## 1. Arithmetic Operators

Arithmetic operators perform some arithmetic operation on one or two
operands. Operators that operate on one operand are called unary
arithmetic operators and operators that operate on two operands are
called binary arithmetic operators.
+,-,\*,/,% are binary operators.
++, -- are unary operators.
<br/>
Suppose : A=5 and B=10

| Operator | Operation                                  | Example   |
| -------- | ------------------------------------------ | --------- |
| -        | Adds two operands                          | A+B = 15  |
| -        | Subtracts right operand from left operand  | B-A = 5   |
| \*       | Multiplies two operands                    | A\*B = 50 |
| /        | Divides left operand by right operand      | B/A = 2   |
| %        | Finds the remainder after integer division | B%A = 0   |
| ++       | Incrementer                                | A++ = 6   |
| --       | Decrementer                                | A-- = 4   |

<b>Pre-incrementer </b> : It increments the value of the operand instantly.
<b>Post-incrementer</b> : It stores the current value of the operand temporarily and only after that statement is completed, the value of the operand is incremented.
<b>Pre-decrementer </b>: It decrements the value of the operand instantly.
<b>Post-decrementer </b> : It stores the current value of the operand temporarily and only after that statement is completed, the value of the operand is decremented.

## 2. Relational Operators

Relational operators define the relation between 2 entities.
They give a boolean value as result i.e true or false.
<br />
Suppose : A=5 and B=10

| Operator | Operation                                                            | Example          |
| -------- | -------------------------------------------------------------------- | ---------------- |
| ==       | Gives true if two operands are equal                                 | A==B is not true |
| !=       | Gives true if two operands are not equal                             | A!=B is true     |
| >        | Gives true if left operand is more than right operand                | A>B is not true  |
| <        | Gives true if left operand is less than right operand                | A<B is true      |
| >=       | Gives true if left operand is more than right operand or equal to it | A>=B is not true |
| <=       | Gives true if left operand is more than right operand or equal to it | A<=B is true     |

## 3. Logical Operators

Logical operators are used to connect multiple expressions or conditions
together.
We have 3 basic logical operators.
<br />
Suppose : A=0 and B=1

| Operator      | Operation                                                                | Example                     |
| ------------- | ------------------------------------------------------------------------ | --------------------------- |
| &&            | AND operator. Gives true if both operands are non-zero                   | (A && B) is false           |
| &#124; &#124; | OR operator. Gives true if atleast one of the two operands are non-zero. | (A &#124; &#124; B) is true |
| !             | NOT operator. Reverse the logical state of operand                       | !A is true                  |

## 4. Bitwise Operators

Bitwise operators are the operators that operate on bits and perform bit-
by-bit operations.

<br/>

Suppose : A=5(0101) and B=6(0110)

| Operator | Operation                                                                                                           | Example                  |
| -------- | ------------------------------------------------------------------------------------------------------------------- | ------------------------ |
| &        | Binary AND. Copies a bit to the result if it exists in both operands.                                               | 0101 & 0110 = 0100       |
| &#124;   | Binary OR. Copies a bit if it exists in either operand.                                                             | 0101 &#124; 0110 = 0111  |
| ^        | Binary XOR. Copies the bit if it is set in one operand but not both.                                                | 0101 ^ 0110 = 0011       |
| ~        | Binary Ones Complement. Flips the bit.                                                                              | ~0101 = 1010             |
| <<       | Binary Left Shift. The left operand's bits are moved left by the number of places specified by the right operand.   | 4 (0100) 4<<1 = 1000 = 8 |
| >>       | Binary Right Shift. The left operand's bits are moved right by the number of places specified by the right operand. | 4>>1 = 0010 = 2          |

If shift operator is applied on a number N then,

- N<<a will give a result N\*2^a
- N>>a will give a result N/2^a

## 5. Assignment Operators

| Operator | Operation                                                                              | Example                      |
| -------- | -------------------------------------------------------------------------------------- | ---------------------------- |
| =        | Assigns value of right operand to left operand                                         | A=B will put value of B in A |
| +=       | Adds right operand to the left operand and assigns the result to left operand.         | A+=B means A = A+B           |
| -=       | Subtracts right operand from the left operand and assigns the result to left operand.  | A-=B means A=A-B             |
| \*=      | Multiplies right operand with the left operand and assigns the result to left operand. | A*=B means A=A*B             |
| /=       | Divides left operand with the right operand and assigns the result to left operand.    | A/=B means A=A/B             |

## 6. Miscellaneous Operator

| Operator                                                 | Operation                                                                                                                                                                 | Example                                      |
| -------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------- |
| sizeof()                                                 | Returns the size of variable                                                                                                                                              | If a is integer then sizeof(a) will return 4 |
| Condition? X:Y                                           | Conditional operator. If condition is true, then returns value of X or else value of Y                                                                                    | A+=B means A = A+B                           |
| Cast Casting operators convert one data type to another. | int(4.350) would return 4.                                                                                                                                                |
| Comma (,)                                                | Comma operator causes a sequence of operations to be performed. The value of the entire comma expression is the value of the last expression of the comma-separated list. |                                              |

# Questions

1. [Comma Operator](./comma.cpp)
2. [Bitwise Operator](./bitwise.cpp)
3. [Pre-Increment Post-Increment](./prePostInc.cpp)
4. [All Arithmetic Operators](./arithmetic.cpp)
