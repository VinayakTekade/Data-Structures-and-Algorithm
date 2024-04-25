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

    cout << "The odd numbers till " << n << " are:" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
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
// The odd numbers till 20 are:
// 1
// 3
// 5
// 7
// 9
// 11
// 13
// 15
// 17
// 19


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// ---- OUTPUT ----
// The odd numbers till 5 are:
// 1
// 3
// 5

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 10
// ---- OUTPUT ----
// The odd numbers till 10 are:
// 1
// 3
// 5
// 7
// 9
