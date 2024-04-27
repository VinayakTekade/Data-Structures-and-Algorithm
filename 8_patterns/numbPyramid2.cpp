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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= gap; j++)
        {
            cout << " ";
        }
        gap--;
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
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
//   1
//  1 2
// 1 2 3

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// ---- OUTPUT ----
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 10
// ---- OUTPUT ----
//          1
//         1 2
//        1 2 3
//       1 2 3 4
//      1 2 3 4 5
//     1 2 3 4 5 6
//    1 2 3 4 5 6 7
//   1 2 3 4 5 6 7 8
//  1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9 10
