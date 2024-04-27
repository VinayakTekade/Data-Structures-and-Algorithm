// Prime numbers are natural numbers that are divisible by only 1 and the number itself
// Example 2, 3, 5, 7, 11, 13
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
    bool flag = 0;

    // Since we need to check till square root of n, the numbers beyond it will be factors in some form
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is a composite number";
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
// 4
// ---- OUTPUT ----
// 4 is a composite number

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// ---- OUTPUT ----
// 5 is a prime number

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 13
// ---- OUTPUT ----
// 13 is a prime numbers
