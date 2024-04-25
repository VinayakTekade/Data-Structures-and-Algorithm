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

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of natural numbers till " << n << " is " << sum << endl;
    // ============ Your Code ends here ==================
#ifndef ONLINE_JUDGE
    fclose(stdout);
#endif
    generateResult();
    return 0;
}

// ==== TEST CASE 1 =====
// ---- INPUT ----
// 10
// ---- OUTPUT ----
// The sum of natural numbers till 10 is 55

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 20
// ---- OUTPUT ----
// The sum of natural numbers till 20 is 210

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 30
// ---- OUTPUT ----
// The sum of natural numbers till 30 is 465
