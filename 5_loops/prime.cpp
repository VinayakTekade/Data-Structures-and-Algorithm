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
    int n, i = 2;
    cin >> n;

    while (n > i)
    {
        if (n % i == 0)
        {
            cout << n << " is a composite number" << endl;
            break;
        }
        i++;
        if (n == i)
        {
            cout << n << " is a prime number" << endl;
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
// 10
// ---- OUTPUT ----
// 10 is a composite number

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 11
// ---- OUTPUT ----
// 11 is a prime number

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 19
// ---- OUTPUT ----
// 19 is a prime number
