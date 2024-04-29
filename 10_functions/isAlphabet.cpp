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

bool isAlphabet(char ch) // wrapper for isAlpha
{
    if (isalpha(ch))
    {
        return true;
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ============ Your Code goes here ==================
    char ch;
    cin >> ch;

    if (isAlphabet(ch))
    {
        cout << ch << " is an Alphabet";
    }
    else
    {
        cout << ch << " is not an Alphabet";
    }

    // ============ Your Code ends here ==================
#ifndef ONLINE_JUDGE
    fclose(stdout);
#endif
    generateResult();
    return 0;
}

// ==== TEST CASE 1 =====
// ---- INPUT ----
// 2
// ---- OUTPUT ----
// 2 is not an Alphabet

// ==== TEST CASE 2 =====
// ---- INPUT ----
// a
// ---- OUTPUT ----
// a is an Alphabet

// ==== TEST CASE 3 =====
// ---- INPUT ----
// Z
// ---- OUTPUT ----
// Z is an Alphabet