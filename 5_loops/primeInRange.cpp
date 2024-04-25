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

    int m, n, i = 2;
    cin >> m >> n;

    while (m <= n)
    {
        while (m > i)
        {
            if (m % i == 0)
            {
                break;
            }
            i++;
            if (m == i)
            {
                cout << m << endl;
            }
        }
        m++;
        i = 2;
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
// 10
// ---- OUTPUT ----
// 3
// 5
// 7

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 10
// 20
// ---- OUTPUT ----
// 11
// 13
// 17
// 19

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 30
// 20
// ---- OUTPUT ----
// 23
// 29