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

int fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
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

    for (int i = 0; i < n; i++)
    {
        print(fibonacci(i));
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
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 15
// ---- OUTPUT ----
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55
// 89
// 144
// 233
// 377



// ==== TEST CASE 3 =====
// ---- INPUT ----
// 20
// ---- OUTPUT ----
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55
// 89
// 144
// 233
// 377
// 610
// 987
// 1597
// 2584
// 4181
