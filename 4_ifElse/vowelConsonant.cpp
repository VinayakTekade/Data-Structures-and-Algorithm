#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE //used to process input from input.txt and print output in output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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

    return 0;
}