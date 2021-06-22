#include <bits/stdc++.h>
using namespace std;

int sumOfSubarray(int arr[], int n, int sum)
{
    int i = 0, j = 0, st = 0, end = 0, currSum = 0;

    while (j < n && currSum < sum)
    {
        currSum += arr[j];
        j++;
    }
    if (currSum == sum)
    {
        st = i + 1;
        end = j;
        cout << "The given sum was found between indices: " << st << " and " << end << endl;
        return 1;
    }

    while (j < n)
    {
        while (currSum > sum)
        {
            currSum -= arr[i];
            i++;
        }

        if (currSum == sum)
        {
            st = i + 1;
            end = j;
            cout << "The given sum was found between indices: " << st << " and " << end << endl;
            return 1;
        }

        currSum += arr[j];
        j++;
    }

    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int sum;
    cin >> sum;

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

    if (sumOfSubarray(arr, n, sum))
        ;
    else
    {
        cout << "The given sum was not found";
    }

    return 0;
}
