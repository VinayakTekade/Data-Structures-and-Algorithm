#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int row, col;
    cin >> row >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    //Row wise Traversal

    cout << "The Row wise traversal is: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl
         << endl;

    //Column wise Traversal

    cout << "The Column wise Traversal is: \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
    }
    cout << endl
         << endl;

    //Spiral Traversal

    int row_start = 0, row_end = row - 1, col_start = 0, col_end = col - 1;

    cout << "The Spiral Order Traversal is: \n";
    while (row_start <= row_end && col_start <= col_end)
    {
        //for row start
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }
        row_start++;

        // for col end
        for (int j = row_start; j <= row_end; j++)
        {
            cout << arr[j][col_end] << " ";
        }
        col_end--;

        // for row end
        if (row_start < row_end)
        {
            for (int i = col_end; i >= col_start; i--)
            {
                cout << arr[row_end][i] << " ";
            }
        }
        row_end--;

        //for col start
        if (col_start < col_end)
        {

            for (int j = row_end; j >= row_start; j--)
            {
                cout << arr[j][col_start] << " ";
            }
        }
        col_start++;
    }

    return 0;
}