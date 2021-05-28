# Switch statement in C++

Switch case statements are a substitute for long if statements that compare a
variable to multiple values. After a match is found, it executes the
corresponding code of that value case.

The syntax for the switch statement

```
switch (n)
{
case 1: // code to be executed if n == 1;
        break;
case 2: // code to be executed if n == 2;
        break;
default: // code to be executed if n doesn't match any of the above cases
}
```

- The variable in switch should have a constant value.
- The break statement is optional. It terminates the switch statement and moves control to the next line after switch.
- If break statement is not added, switch will not get terminated and it will continue onto the next line after switch.
- Every case value should be unique.
- Default case is optional. But it is important as it is executed when no case value could be matched.

# Questions

1. [Simple Calculator](./switch.cpp)
2. [Find whether an alphabet is a vowel or a consonant](./vowelConsonant.cpp)
