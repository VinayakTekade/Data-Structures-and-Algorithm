#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int row1, col1, row2, col2;
    cin >> row1 >> col1;
    cin >> row2 >> col2;

    int m1[row1][col1];
    int m2[row2][col2];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> m1[i][j];
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> m2[i][j];
        }
    }

    cout << "The Given Matrix1 is: \n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "The Given Matrix2 is: \n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    if (col1 == row2)
    {
        int ans[row1][col2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                ans[i][j] = 0;
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < row2; k++)
                {
                    ans[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        cout << "The Product Matrix is: \n";
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Enter valid matrices";
    }

    return 0;
}
