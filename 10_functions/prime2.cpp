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

void print(int num)
{
    cout << num << endl;
}

bool isPrime(int num)
{
    for (int i = 2; (i * i) <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void rangePrime(int num1, int num2)
{
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            print(i);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ============ Your Code goes here ==================
    int a, b;
    cin >> a >> b;

    rangePrime(a, b);

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
// 10
// ---- OUTPUT ----
// 1
// 2
// 3
// 5
// 7

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 10
// 20
// ---- OUTPUT ----
// 11
// 13
// 17
// 19

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 20
// 30
// ---- OUTPUT ----
// 23
// 29
