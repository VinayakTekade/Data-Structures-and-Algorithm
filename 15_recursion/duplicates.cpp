#include <iostream>
#include <string>
using namespace std;

string duplicates(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = duplicates(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }

    return ch + ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    cout << duplicates(s);
    return 0;
}