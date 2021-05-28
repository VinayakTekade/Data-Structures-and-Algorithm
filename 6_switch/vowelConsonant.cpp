#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char op;
    cin >> op;

    op = tolower(op);

    switch (op)
    {
    case 'a':
        cout << op << " is a vowel";
        break;

    case 'e':
        cout << op << " is a vowel";
        break;

    case 'i':
        cout << op << " is a vowel";
        break;

    case 'o':
        cout << op << " is a vowel";
        break;

    case 'u':
        cout << op << " is a vowel";
        break;

    default:
        cout << op << " is a consonant";
        break;
    }

    return 0;
}