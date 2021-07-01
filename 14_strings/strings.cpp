#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str; //no spaces
    cin.ignore();
    cout << str << endl;

    string str1(5, 'n');
    cout << str1 << endl;

    string str2 = "VinayakTekade";
    cout << str2 << endl;

    string str3;
    getline(cin, str3); // spaces will work
    cin.ignore();
    cout << str3 << endl;

    //Operations on string

    string s1 = "fam", s2 = "ily"; // Appending
    // s1.append(s2);
    s1 += s2;
    cout << s1 << endl;

    cout << s1[1] << endl; // Accessing single char

    s1.clear(); // Clears string

    // Comparing Strings
    string a, b;
    getline(cin, a);
    cin.ignore();
    getline(cin, b);
    cin.ignore();

    if (a.compare(b) == 0)
    {
        cout << a << " and " << b << " are equal" << endl;
    }
    else if (a.compare(b) > 0)
    {
        cout << a << " is bigger" << b << endl;
    }
    else
    {
        cout << a << " is smaller" << b << endl;
    }

    // Check whether sring is empty
    if (s1.empty())
    {
        cout << "string is empty" << endl;
    }

    // Delete characters and shift the reamianing
    string nin = "nincompoop";
    nin.erase(3, 3);     // erase(starting index, number of characters)
    cout << nin << endl; // ninpoop

    //searching substrings
    cout << nin.find("poop") << endl; // returns first index of poop
    nin.insert(2, "lol");             // ninlolpoop

    cout << nin.size() << endl;   // 10
    cout << nin.length() << endl; // 10

    //Getting Substring
    string s = nin.substr(6, 4); //substr(starting index, number of characters)
    cout << nin << endl;         // poop

    // Converting string to integer
    string num = "123";
    cout << stoi(num) + 4 << endl; //127

    // Converting integer to string
    int x = 123;
    cout << to_string(x) + "4" << endl; // 1234

    //sorting string
    string seq = "afjwoxjioejfbs";
    sort(seq.begin(), seq.end());

    cout << seq << endl;
    return 0;
}