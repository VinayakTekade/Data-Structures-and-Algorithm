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

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
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

    cout << "Before Swaping" << endl
         << "a = " << a << " b =" << b << endl
         << endl;

    swap(a, b);

    cout << "After Swaping" << endl
         << "a = " << a << " b =" << b << endl
         << endl;

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
// 2
// ---- OUTPUT ----
// Before Swaping
// a = 1 b =2

// After Swaping
// a = 2 b =1

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 2
// 3
// ---- OUTPUT ----
// Before Swaping
// a = 2 b =3

// After Swaping
// a = 3 b =2

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 100
// 223
// ---- OUTPUT ----
// Before Swaping
// a = 100 b =223

// After Swaping
// a = 223 b =100
