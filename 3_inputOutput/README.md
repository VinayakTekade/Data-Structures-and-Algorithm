# Input Output in C++

1. <b>Comments</b><br/>
   The two slash(//) signs are used to add comments in a program. It does not have any effect on the behaviour or outcome of the program. It is used to give description of the program you’re writing.

2.<b>#include</b><br/>
include is the pre-processor directive that is used to include files in our program. Here we are including he iostream standard file which is necessary for the declarations of basic standard input/output library in C++.

3. <b>Using namespace std</b><br/>
   All elements of the standard C++ library are declared within namespace. Here we are using std namespace.

4. <b>int main()</b><br/>
   The execution of any C++ program starts with the main function, hence it is necessary to have a main function in your program. ‘int’ is the return value of this function. (We will be studying about functions in more detail later).

5. <b>{}</b><br/>
   The curly brackets are used to indicate the starting and ending point of any function. Every opening bracket should have a corresponding closing bracket.

6. <b>cout<<”Hello World!\n”;</b><br/>
   This is a C++ statement. cout represents the standard output stream in C++. It is declared in the iostream standard file within the std namespace. The text between quotations will be printed on the screen.
   \n will not be printed, it is used to add line break.
   Each statement in C++ ends with a semicolon ;

7. <b>return 0;</b><br/>
   return signifies the end of a function. Here the function is main, so when we hit return 0, it exits the program. We are returning 0 because we mentioned the return type of main function as integer (int main). A zero indicates that everything went fine and a one indicates that something has gone wrong.

8. <b>Standard Output (cout)</b><br/>
   By default, the standard output of a program points at the screen. So with the cout operator and the “insertion” operator (<<) you can print a message onto the screen.

9. <b>Standard input (cin)</b><br/>
   In most cases the standard input device is the keyboard. With the cin and >> operators it is possible to read input from the keyboard.
