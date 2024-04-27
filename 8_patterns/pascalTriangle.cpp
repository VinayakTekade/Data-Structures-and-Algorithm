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
    int gap = n - 1;
    int coef = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= gap; j++)
        {
            cout << " ";
        }
        gap--;
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            cout << coef << " ";
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
//    1
//   1 1
//  1 2 1

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// ---- OUTPUT ----
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 10
// ---- OUTPUT ----
//           1
//          1 1
//         1 2 1
//        1 3 3 1
//       1 4 6 4 1
//      1 5 10 10 5 1
//     1 6 15 20 15 6 1
//    1 7 21 35 35 21 7 1
//   1 8 28 56 70 56 28 8 1
//  1 9 36 84 126 126 84 36 9 1
