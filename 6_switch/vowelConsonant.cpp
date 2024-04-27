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
    char op;
    cin >> op;

    op = tolower(op);

    switch (op)
    {
    case 'a':
        cout << op << " is a vowel";
        break;

    case 'e':
        cout << op << " is a vowel";
        break;

    case 'i':
        cout << op << " is a vowel";
        break;

    case 'o':
        cout << op << " is a vowel";
        break;

    case 'u':
        cout << op << " is a vowel";
        break;

    default:
        cout << op << " is a consonant";
        break;
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
// a
// ---- OUTPUT ----
// a is a vowel

// ==== TEST CASE 2 =====
// ---- INPUT ----
// b
// ---- OUTPUT ----
// b is a consonant

// ==== TEST CASE 3 =====
// ---- INPUT ----
// e
// ---- OUTPUT ----
// e is a vowel

// ==== TEST CASE 4 =====
// ---- INPUT ----
// f
// ---- OUTPUT ----
// f is a consonant