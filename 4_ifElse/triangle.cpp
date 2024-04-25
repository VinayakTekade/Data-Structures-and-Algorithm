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

    if (a == b && a == c && b == c)
    {
        cout << "The triangle with sides " << a << ", " << b << ", " << c << " is an equilateral triangle" << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "The triangle with sides " << a << ", " << b << ", " << c << " is an isosceles triangle" << endl;
    }
    else
    {
        {
            cout << "The triangle with sides " << a << ", " << b << ", " << c << " is a scalene triangle" << endl;
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
// 3
// 4
// 5
// ---- OUTPUT ----
// The triangle with sides 3, 4, 5 is a scalene triangle


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 3
// 3
// 3
// ---- OUTPUT ----
// The triangle with sides 3, 3, 3 is an equilateral triangle


// ==== TEST CASE 3 =====
// ---- INPUT ----
// 4
// 4
// 8
// ---- OUTPUT ----
// The triangle with sides 4, 4, 8 is an isosceles triangle
