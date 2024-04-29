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

int sumNatural(int n)
{
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {                                    //Time Complexity O(n)
    //     sum += i;
    // }

    return (n * (n + 1)) / 2; // Time Complexity O(1)
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

    cout << "The sum of first " << n << " natural numbers is " << sumNatural(n);

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
// The sum of first 10 natural numbers is 55

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 20
// ---- OUTPUT ----
// The sum of first 20 natural numbers is 210

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 30
// ---- OUTPUT ----
// The sum of first 30 natural numbers is 465