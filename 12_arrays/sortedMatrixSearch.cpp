#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int row, col;
    cin >> row;
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The Given Array is: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int key, r = 0, c = col - 1;
    cin >> key;

    bool found = 0;

    while (r < row && c >= 0)
    {
        if (arr[r][c] == key)
        {
            found = 1;
            break;
        }
        if (arr[r][c] < key)
        {
            r++;
        }
        else
        {
            c--;
        }
    }

    if (found == 1)
    {
        cout << key << " found at [" << r << ", " << c << "]" << endl;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
