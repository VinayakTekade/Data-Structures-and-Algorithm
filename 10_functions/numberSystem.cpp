#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0, x = 1;
    while (n > 0)
    {
        int last = n % 10;
        ans = ans + last * x;
        x *= 2;
        n = n / 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0, x = 1;
    while (n > 0)
    {
        int last = n % 10;
        ans = ans + last * x;
        x *= 8;
        n = n / 10;
    }
    return ans;
}

int hexToDecimal(string n)
{
    int ans = 0, x = 1;
    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + (n[i] - '0') * x;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + (n[i] - 'A' + 10) * x;
        }
        x *= 16;
    }

    return ans;
}

int decimalToBinary(int n)
{
    // int arr[10], i = 0, ans = 0;
    // while (n > 0)
    // {
    //     arr[i] = n % 2;
    //     n = n / 2;
    //     i++;                                 // Same Time Complexity = O(n)
    // }                                        // Higher Space complexity due to array
    // for (int j = i - 1; j >= 0; j--)
    // {
    //     ans = ans * 10 + arr[j];
    // }
    // return ans;

    int ans = 0, x = 1;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int last = n / x;
        n -= last * x;
        x /= 2;
        ans = ans * 10 + last;
    }
    return ans;
}

int decimalToOctal(int n)
{
    // int arr[10], i = 0, ans = 0;
    // while (n > 0)
    // {
    //     arr[i] = n % 2;
    //     n = n / 2;
    //     i++;                                 // Same Time Complexity = O(n)
    // }                                        // Higher Space complexity due to array
    // for (int j = i - 1; j >= 0; j--)
    // {
    //     ans = ans * 10 + arr[j];
    // }
    // return ans;

    int ans = 0, x = 1;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int last = n / x;
        n -= last * x;
        x /= 8;
        ans = ans * 10 + last;
    }
    return ans;
}

string decimalToHex(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int last = n / x;
        n -= last * x;
        x /= 16;
        if (last >= 0 && last <= 9)
        {
            ans = ans + to_string(last);
        }
        else
        {
            char c = 'A' + last - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);         // Running in interactive mode in console
    //     freopen("../output.txt", "w", stdout);
    // #endif
    char op = 'y';
    do
    {
        cout << " 1. Binary To Decimal \n 2. Octal To Decimal \n 3. Hexadecimal To Decimal\n"
             << " 4. Decimal To Binary \n 5. Decimal to Octal \n 6. Decimal To Hexadecimal\n";
        cout << "Enter your choice(1-6): ";

        int choice;
        cin >> choice;

        int binary, octal, decimal;
        string hex;

        switch (choice)
        {
        case 1:
            cout << "Enter a Binary Number: ";
            cin >> binary;
            cout << binary << " in Decimal Format is " << binaryToDecimal(binary) << endl;
            break;
        case 2:
            cout << "Enter an Octal Number: ";
            cin >> octal;
            cout << octal << " in Decimal Format is " << octalToDecimal(octal) << endl;
            break;
        case 3:
            cout << "Enter a Hexadecimal Number: ";
            cin >> hex;
            cout << hex << " in Decimal Format is " << hexToDecimal(hex) << endl;
            break;
        case 4:
            cout << "Enter a Decimal Number: ";
            cin >> decimal;
            cout << decimal << " in Binary Format is " << decimalToBinary(decimal) << endl;
            break;
        case 5:
            cout << "Enter a decimal Number: ";
            cin >> decimal;
            cout << decimal << " in Octal Format is " << decimalToOctal(decimal) << endl;
            break;
        case 6:
            cout << "Enter a decimal Number: ";
            cin >> decimal;
            cout << decimal << " in Hexadecimal Format is " << decimalToHex(decimal) << endl;
            break;

        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
        cout << "Do you want to continue?(y/n)";
        cin >> op;

    } while (op == 'Y' || op == 'y');

    return 0;
}