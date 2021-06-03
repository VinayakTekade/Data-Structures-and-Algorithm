#include <iostream>
using namespace std;

bool isAlphabet(char ch) // wrapper for isAlpha
{
    if (isalpha(ch))
    {
        return true;
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char ch;
    cin >> ch;

    if (isAlphabet(ch))
    {
        cout << ch << " is an Alphabet";
    }
    else
    {
        cout << ch << " is not an Alphabet";
    }

    return 0;
}