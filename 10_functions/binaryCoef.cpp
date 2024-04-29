// Binary Coeficient = n! / (n-r)!* r!
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

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ============ Your Code goes here ==================
    int n, r, nCr;
    cin >> n >> r;
    nCr = factorial(n) / (factorial(n - r) * factorial(r));
    cout << "nCr = " << nCr;

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
// 2
// ---- OUTPUT ----
// nCr = 10

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 10
// 2
// ---- OUTPUT ----
// nCr = 45

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 20
// 10
// ---- OUTPUT ----
// nCr = 11