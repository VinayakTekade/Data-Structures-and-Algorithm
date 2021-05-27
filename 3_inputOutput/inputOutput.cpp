#include <iostream>  //Preprocessor Directive used to include header files, in this case for input and output operations
using namespace std; //using standard C++ library

int main()           // The execution of code begins from main functions for all the programs
{                    // Curly braces define the starting and ending of the functions
#ifndef ONLINE_JUDGE //used to process input from input.txt and print output in output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int age;
    cin >> age;                                // Standard Input used along with extraction operator (>>)
    cout << "Your age is " << age << " years"; // Standard Output used with insertion operator (<<)

    return 0;
}