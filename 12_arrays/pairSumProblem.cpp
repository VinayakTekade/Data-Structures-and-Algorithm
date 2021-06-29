#include <iostream>
using namespace std;

// bool pairSum(int arr[], int n, int k) // Brute Force Method
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 cout << i << " " << j;
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

bool pairSum(int arr[], int n, int k) // Two Pointer Method only for sorted array
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high;
            return 1;
        }
        else if (arr[low] + arr[high] >= k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }

    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n;
    cin >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Given Array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    cout << "The pair indices are" << endl;
    pairSum(arr, n, k);

    return 0;
}