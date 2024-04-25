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
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is the maximum between " << a << " and " << b << endl;
        cout << b << " is the minimum between " << a << " and " << b << endl;
    }
    else
    {
        cout << b << " is the maximum between " << a << " and " << b << endl;
        cout << a << " is the minimum between " << a << " and " << b << endl;
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
// 12
// 24
// ---- OUTPUT ----
// 24 is the maximum between 12 and 24
// 12 is the minimum between 12 and 24


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 1
// 2
// ---- OUTPUT ----
// 2 is the maximum between 1 and 2
// 1 is the minimum between 1 and 2

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 100
// 223
// ---- OUTPUT ----
// 223 is the maximum between 100 and 223
// 100 is the minimum between 100 and 223