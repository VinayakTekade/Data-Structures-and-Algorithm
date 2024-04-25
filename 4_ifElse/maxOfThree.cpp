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

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << a << endl;
        }
        else
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << b << endl;
        }
        else
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << c << endl;
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
// 1
// 2
// 3
// ---- OUTPUT ----
// The largest of 1, 2, 3 is 3

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 112
// 26
// 444
// ---- OUTPUT ----
// The largest of 112, 26, 444 is 444

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 100
// 223
// 0
// ---- OUTPUT ----
// The largest of 100, 223, 0 is 223