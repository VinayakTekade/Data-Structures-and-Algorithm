#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int beg = 0, end = size;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        if (key == arr[mid])
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

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

    int element;
    cin >> element;

    int search = binarySearch(arr, n, element);

    if (search == -1)
    {
        cout << element << " not found in the array" << endl;
    }
    else
    {

        cout << element << " found at index number " << search << endl;
    }

    return 0;
}