#include <iostream>
#include <fstream>
#include <string>
#include "../compareFiles.h"
using namespace std;

void generateResult()
{
    bool result = compareFiles("../expected_output.txt", "../output.txt");
    result ? cerr << "Test Case Passed!" << endl : cerr << "Test Case Failed!" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ============ Your Code goes here ==================
    // Variables and Data types
    int a;  // variable declaration
    a = 12; // initialisation

    cout << "size of int is " << sizeof(a) << " bytes" << endl; // 4 bytes

    float b;
    cout << "size of float is " << sizeof(b) << " bytes" << endl; // 4 bytes

    char c;
    cout << "size of char is " << sizeof(c) << " bytes" << endl; // 1 bytes

    bool d;
    cout << "size of bool is " << sizeof(d) << " bytes" << endl; // 1 bytes

    // Type Modifiers
    signed int e;                                                      // range = -2,147,438,648 to 2,147,438,647
    cout << "size of signed int is " << sizeof(e) << " bytes" << endl; // 4 bytes

    unsigned int f;                                                      // range = 0 to 4,294,967,295
    cout << "size of unsigned int is " << sizeof(f) << " bytes" << endl; // 4 bytes

    long int g;                                                      // range =-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    cout << "size of long int is " << sizeof(g) << " bytes" << endl; // 4 bytes

    long long h;
    cout << "size of long long is " << sizeof(h) << " bytes" << endl; // 8 bytes

    short int i;                                                      // range -32,768 to 32,767
    cout << "size of short int is " << sizeof(i) << " bytes" << endl; // 2 bytes

    // ============ Your Code ends here ==================
#ifndef ONLINE_JUDGE
    fclose(stdout);
#endif
    generateResult();
    return 0;
}

// ==== TEST CASE 1 =====
// ---- INPUT ----
//
// ---- OUTPUT ----
// size of int is 4 bytes
// size of float is 4 bytes
// size of char is 1 bytes
// size of bool is 1 bytes
// size of signed int is 4 bytes
// size of unsigned int is 4 bytes
// size of long int is 4 bytes
// size of long long is 8 bytes
// size of short int is 2 bytes
//