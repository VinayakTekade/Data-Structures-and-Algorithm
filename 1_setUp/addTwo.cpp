#include <iostream>
#include <fstream>
#include <string>
#include "../compareFiles.h"
using namespace std;

void generateResult()
{
    bool result = compareFiles("../expected_output.txt", "../output.txt");
    result ? cerr << "Code Passed!" << endl : cerr << "Code Failed!" << endl;
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
    cout << a + b << "\n";

    // ============ Your Code ends here ==================
#ifndef ONLINE_JUDGE
    fclose(stdout);
#endif
    generateResult();
    return 0;
}

// ==== TEST CASE 1 =====
// ---- INPUT ----
// 12
// 24
// ---- OUTPUT ----
// 36

// ==== TEST CASE 2 =====
// ---- INPUT ----
// 1
// 2
// ---- OUTPUT ----
// 3

// ==== TEST CASE 3 =====
// ---- INPUT ----
// 100
// 223
// ---- OUTPUT ----
// 323