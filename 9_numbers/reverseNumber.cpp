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

    int reverse = 0;
    // Get the last digit, add to reverse * 10
    while (n > 0)
    {
        int last = n % 10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }
    cout << reverse;
    // ============ Your Code ends here ==================
#ifndef ONLINE_JUDGE
    fclose(stdout);
#endif
    generateResult();
    return 0;
}

// ==== TEST CASE 1 =====
// ---- INPUT ----
// 131314788
// ---- OUTPUT ----
// 887413131

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 123456789
// ---- OUTPUT ----
// 987654321

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 123454321
// ---- OUTPUT ----
// 123454321
