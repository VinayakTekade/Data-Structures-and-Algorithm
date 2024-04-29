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

int min(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
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

    cout << "The max of " << a << ", " << b << ", " << c << " is " << max(a, b, c) << endl;
    cout << "The min of " << a << ", " << b << ", " << c << " is " << min(a, b, c) << endl;

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
// The max of 1, 2, 3 is 3
// The min of 1, 2, 3 is 1


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 2
// 4
// 1
// ---- OUTPUT ----
// The max of 2, 4, 1 is 4
// The min of 2, 4, 1 is 1


// ==== TEST CASE 3 =====
// ---- INPUT ----
// 221
// 432
// 144
// ---- OUTPUT ----
// The max of 221, 432, 144 is 432
// The min of 221, 432, 144 is 144
