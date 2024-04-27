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

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
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
// ---- OUTPUT ----
//   *
//  *
// *

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// ---- OUTPUT ----
//   *
//  * *
// *   *

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 10
// ---- OUTPUT ----
//   *   *
//  * * * * *
// *   *   *
