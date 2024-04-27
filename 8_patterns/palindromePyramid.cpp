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

    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << k-- << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k++ << " ";
        }
        for (int j = 1; j <= n + i; j++)
        {
            cout << "  ";
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
//     1
//   2 1 2
// 3 2 1 2 3

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// ---- OUTPUT ----
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 10
// ---- OUTPUT ----
//                   1
//                 2 1 2
//               3 2 1 2 3
//             4 3 2 1 2 3 4
//           5 4 3 2 1 2 3 4 5
//         6 5 4 3 2 1 2 3 4 5 6
//       7 6 5 4 3 2 1 2 3 4 5 6 7
//     8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
//   9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
// 10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10
