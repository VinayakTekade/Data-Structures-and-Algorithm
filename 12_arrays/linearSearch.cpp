#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int search)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            return i;
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

    int search = linearSearch(arr, n, element);

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