// Armstrong number is a number that is equal to the sum of cubes of its digits
// Example: 0, 1, 153, 370, 371, 407
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

    int ans = n, sum = 0;

    while (n > 0)
    {
        int last = n % 10;
        sum = sum + (last * last * last);
        n = n / 10;
    }

    if (ans == sum)
    {
        cout << ans << " is a armstrong number";
    }
    else
    {
        cout << ans << " is not a armstrong number";
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
// 1
// ---- OUTPUT ----
// 1 is a armstrong number

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 153
// ---- OUTPUT ----
// 153 is a armstrong number

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 155
// ---- OUTPUT ----
// 155 is not a armstrong number