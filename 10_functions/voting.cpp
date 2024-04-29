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

bool isEligible(int age)
{
    if (age < 18)
    {
        return false;
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ============ Your Code goes here ==================
    int age;
    cin >> age;

    if (isEligible(age))
    {
        cout << "Eligible for voting";
    }
    else
    {
        cout << "Not eligible for voting";
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
// 18
// ---- OUTPUT ----
// Eligible for voting

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 16
// ---- OUTPUT ----
// Not eligible for voting

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 20
// ---- OUTPUT ----
// Eligible for voting