#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    cout << "The given word is: " << arr << endl;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        cout << arr << " is a palindrome" << endl;
    }
    else
    {
        cout << arr << " is not a palindrome" << endl;
    }

    return 0;
}