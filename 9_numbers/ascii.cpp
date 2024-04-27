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
    char n;
    cin >> n;
    // Type cast char data type to int data type to get its ASCII value
    cout << "The ASCII value of " << n << " is " << int(n);
    // ============ Your Code ends here ==================
#ifndef ONLINE_JUDGE
    fclose(stdout);
#endif
    generateResult();
    return 0;
}

// ==== TEST CASE 1 =====
// ---- INPUT ----
// a
// ---- OUTPUT ----
// The ASCII value of a is 97

// ==== TEST CASE 2 =====
// ---- INPUT ----
// A
// ---- OUTPUT ----
// The ASCII value of A is 65

// ==== TEST CASE 3 =====
// ---- INPUT ----
// Z
// ---- OUTPUT ----
// The ASCII value of Z is 90