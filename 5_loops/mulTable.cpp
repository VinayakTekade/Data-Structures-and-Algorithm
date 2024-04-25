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

    cout << "Multiplication Table of " << n << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
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
// Multiplication Table of 2
// 2 * 1 = 2
// 2 * 2 = 4
// 2 * 3 = 6
// 2 * 4 = 8
// 2 * 5 = 10
// 2 * 6 = 12
// 2 * 7 = 14
// 2 * 8 = 16
// 2 * 9 = 18
// 2 * 10 = 20


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 12
// ---- OUTPUT ----
// Multiplication Table of 12
// 12 * 1 = 12
// 12 * 2 = 24
// 12 * 3 = 36
// 12 * 4 = 48
// 12 * 5 = 60
// 12 * 6 = 72
// 12 * 7 = 84
// 12 * 8 = 96
// 12 * 9 = 108
// 12 * 10 = 120


// ==== TEST CASE 3 =====
// ---- INPUT ----
// 127
// ---- OUTPUT ----
// Multiplication Table of 127
// 127 * 1 = 127
// 127 * 2 = 254
// 127 * 3 = 381
// 127 * 4 = 508
// 127 * 5 = 635
// 127 * 6 = 762
// 127 * 7 = 889
// 127 * 8 = 1016
// 127 * 9 = 1143
// 127 * 10 = 1270
