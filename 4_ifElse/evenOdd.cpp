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

    if (n % 2 == 0)
    {
        cout << n << " is an even number";
    }
    else
    {
        cout << n << " is an odd number";
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
// 18
// ---- OUTPUT ----
// 18 is an even number

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 18
// ---- OUTPUT ----
// 18 is an even number

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 0
// ---- OUTPUT ----
// 0 is an even number