# Loops in C++

A loop is used for executing a block of statements repeatedly until a particular
condition is satisfied. A loop consists of an initialization statement, a test
condition and an increment statement.

## for loop

The syntax of the for loop is

```
for (initialization; condition; update) {
// body of-loop
}
```

## while loop

The syntax for while loop is

```
while (condition) {
// body of the loop
}
```

## do while loop

The syntax for while loop is

```
do {
// body of loop;
}
while (condition);
```

## Jumps in loops

Jumps in loops are used to control the flow of loops. There are two statements
used to implement jump in loops - Continue and Break. These statements are
used when we need to change the flow of the loop when some specified
condition is met.

### Continue Statement

Continue statement is used to skip to the next iteration of that loop. This
means that it stops one iteration of the loop. All the statements present
after the continue statement in that loop are not executed.

### Break Statement

Break statement is used to terminate the current loop. As soon as the break
statement is encountered in a loop, all further iterations of the loop are
stopped and control is shifted to the first statement after the end of loop.

# Questions

1. [Find the sum of natural numbers till n](./forLoop.cpp).
2. [Display multiplication table of n till 10](./mulTable.cpp).
3. [Find the sum of positive numbers till a negative number is input](sumTillPositive.cpp).
4. [Print all the odd numbers till n using continue statement](oddTillN.cpp)
5. [Check if a number is prime or not](prime.cpp)
6. [Print all prime numbers in a range](primeInRange.cpp)
