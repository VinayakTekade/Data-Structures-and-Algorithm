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

bool isEven(int n)
{
    if (n % 2 == 0)
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
    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << n << " is an Even Number";
    }
    else
    {
        cout << n << " is an Odd Number";
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
// ---- OUTPUT ----
// 20 is an Even Number

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 11
// ---- OUTPUT ----
// 11 is an Odd Number

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 6
// ---- OUTPUT ----
// 6 is an Even Number