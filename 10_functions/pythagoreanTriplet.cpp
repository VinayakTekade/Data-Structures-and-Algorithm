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

bool isPythagoreanTriplet(int a, int b, int c)
{
    int x = max(a, max(b, c)), y, z;

    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }

    if ((x * x) == ((y * y) + (z * z)))
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
    int a, b, c;
    cin >> a >> b >> c;

    if (isPythagoreanTriplet(a, b, c))
    {
        cout << a << ", " << b << ", " << c
             << " is a Pythagorean Triplet";
    }
    else
    {
        cout << a << ", " << b << ", " << c
             << " is not a Pythagorean Triplet";
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
// 3, 4, 5 is a Pythagorean Triplet

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 3
// 4
// 6
// ---- OUTPUT ----
// 3, 4, 6 is not a Pythagorean Triplet

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 8
// 12
// 13
// ---- OUTPUT ----
// 8, 12, 13 is not a Pythagorean Triplet