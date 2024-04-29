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

int addBinary(int a, int b)
{
    int sum = 0, carry = 0;
    while (a > 0 || b > 0 || carry > 0)
    {
        int lastA = a % 10;
        a = a / 10;

        int lastB = b % 10;
        b = b / 10;

        if (lastA + lastB + carry < 2)
        {
            sum = sum * 10 + (lastA + lastB + carry);
            carry = 0;
        }
        else if (lastA + lastB + carry < 3)
        {
            sum = sum * 10;
            carry = 1;
        }
        else
        {
            sum = sum * 10 + 1;
            carry = 1;
        }
    }
    return sum;
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

    cout << addBinary(a, b);

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
// 10
// ---- OUTPUT ----
// 11

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 101
// 100
// ---- OUTPUT ----
// 1001

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 111
// 100
// ---- OUTPUT ----
// 1101