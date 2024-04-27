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

    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
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
// 5
// 3
// ---- OUTPUT ----
// ***
// ***
// ***
// ***
// ***

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// 10
// ---- OUTPUT ----
// **********
// **********
// **********
// **********
// **********

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 10
// 10
// ---- OUTPUT ----
// **********
// **********
// **********
// **********
// **********
// **********
// **********
// **********
// **********
// **********
