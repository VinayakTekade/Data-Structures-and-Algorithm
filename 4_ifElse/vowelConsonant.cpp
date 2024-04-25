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
    char a;
    cin >> a;

    int isLowercaseVowel = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    int isUppercaseVowel = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
    {
        cout << a << " is a vowel" << endl;
    }
    else
    {
        cout << a << " is a consonant";
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
// a
// ---- OUTPUT ----
// a is a vowel

// ==== TEST CASE 2 =====
// ---- INPUT ----
// b
// ---- OUTPUT ----
// b is a consonant

// ==== TEST CASE 3 =====
// ---- INPUT ----
// u
// ---- OUTPUT ----
// u is a vowel