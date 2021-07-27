#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firstOccurence(arr, n, i + 1, key);
}

// int lastOccurence(int arr[], int n, int i, int key)
// {
//     if (i == 0)
//     {
//         return -1;
//     }

//     if (arr[i] == key)
//     {
//         return i;
//     }
//     return lastOccurence(arr, n, i - 1, key);
// }

int lastOccurence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int restArray = lastOccurence(arr, n, i + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n, key;
    cin >> n >> key;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << lastOccurence(arr, n, n, key);
    return 0;
}