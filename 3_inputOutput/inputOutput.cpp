#include <iostream>  //Preprocessor Directive used to include header files, in this case for input and output operations
#include <fstream>   //in this case for handling file input and output 
#include <string>   // in this case for handling strings (We will discuss this in detail later)
#include "../compareFiles.h" // Used to compare expected output with actual output 
using namespace std;   //using standard C++ library

void generateResult() // function definition, in this case used to check whether a test case passed
{
    bool result = compareFiles("../expected_output.txt", "../output.txt");
    result ? cerr << "Test Case Passed!" << endl : cerr << "Test Case Failed!" << endl;
}

int main()  // The execution of code begins from main functions for all the programs
{            // Curly braces define the starting and ending of the functions
#ifndef ONLINE_JUDGE   //used to process input from input.txt and print output in output.txt
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ============ Your Code goes here ==================
    int age;
    cin >> age;                                // Standard Input used along with extraction operator (>>)
    cout << "Your age is " << age << " years"; // Standard Output used with insertion operator (<<)

    // ============ Your Code ends here ==================
#ifndef ONLINE_JUDGE  //Used to stop output to file and start output in console
    fclose(stdout);
#endif
    generateResult(); //Function call
    return 0; // return value of main functiona
} 

// ==== TEST CASE 1 =====
// ---- INPUT ----
// 18
// ---- OUTPUT ----
// Your age is 18 years

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 20
// ---- OUTPUT ----
// Your age is 20 years

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 55
// ---- OUTPUT ----
// Your age is 55 years
