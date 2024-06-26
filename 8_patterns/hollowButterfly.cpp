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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            if (j == 1 || j == i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (j == 0 || j == n - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            if (j == 0 || j == n - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
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
// 2
// ---- OUTPUT ----
// *   *
// ** **
// ** **
// *   *


// ==== TEST CASE 2 =====
// ---- INPUT ----
// 5
// ---- OUTPUT ----
// *         *
// **       **
// * *     * *
// *  *   *  *
// *   * *   *
// *   * *   *
// *  *   *  *
// * *     * *
// **       **
// *         *


// ==== TEST CASE 3 =====
// ---- INPUT ----
// 10
// ---- OUTPUT ----
// *                   *
// **                 **
// * *               * *
// *  *             *  *
// *   *           *   *
// *    *         *    *
// *     *       *     *
// *      *     *      *
// *       *   *       *
// *        * *        *
// *        * *        *
// *       *   *       *
// *      *     *      *
// *     *       *     *
// *    *         *    *
// *   *           *   *
// *  *             *  *
// * *               * *
// **                 **
// *                   *
