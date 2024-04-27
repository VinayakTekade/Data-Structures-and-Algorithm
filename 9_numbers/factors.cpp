//  A factor is a number that divides a given number exactly, with no remainder
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
    int n;
    cin >> n;

    cout << "The factors of " << n << " are:" << endl;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
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
// 24
// ---- OUTPUT ----
// The factors of 24 are:
// 2
// 3
// 4
// 6
// 8
// 12


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 16
// ---- OUTPUT ----
// The factors of 16 are:
// 2
// 4
// 8


// ==== TEST CASE 3 =====
// ---- INPUT ----
// 15
// ---- OUTPUT ----
// The factors of 15 are:
// 3
// 5
