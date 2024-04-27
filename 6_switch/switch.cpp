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
    int n1, n2;
    cin >> n1 >> n2;

    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;

    case '*':
        cout << n1 * n2;
        break;

    case '/':
        cout << n1 / n2;
        break;

    case '%':
        cout << n1 % n2;
        break;

    default:
        cout << "Invalid Operator" << endl;
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
// 20
// 30
// +
// ---- OUTPUT ----
// 50

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 30
// 20
// -
// ---- OUTPUT ----
// 10

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 100
// 223
// *
// ---- OUTPUT ----
// 22300

// ==== TEST CASE 4 =====
// ---- INPUT ----
// 100
// 5
// /
// ---- OUTPUT ----
// 20

// ==== TEST CASE 5 =====
// ---- INPUT ----
// 100
// 3
// %
// ---- OUTPUT ----
// 1

// ==== TEST CASE 6 =====
// ---- INPUT ----
// 100
// 3
// ^
// ---- OUTPUT ----
// Invalid Operator