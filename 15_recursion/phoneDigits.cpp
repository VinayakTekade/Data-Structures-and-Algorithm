#include <iostream>
#include <string>
using namespace std;

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    keypad(s, "");
    return 0;
}