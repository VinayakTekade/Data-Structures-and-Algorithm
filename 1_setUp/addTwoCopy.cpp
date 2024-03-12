#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool compareFiles(const string &p1, const string &p2)
{
    ifstream f1(p1, ifstream::binary | ifstream::ate);
    ifstream f2(p2, ifstream::binary | ifstream::ate);

    if (f1.fail() || f2.fail())
    {
        return false; // file problem
    }

    if (f1.tellg() != f2.tellg())
    {
        return false; // size mismatch
    }

    // seek back to beginning and use std::equal to compare contents
    f1.seekg(0, ifstream::beg);
    f2.seekg(0, ifstream::beg);
    return equal(istreambuf_iterator<char>(f1.rdbuf()),
                 istreambuf_iterator<char>(),
                 istreambuf_iterator<char>(f2.rdbuf()));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";

    // Close the output file before comparing
#ifndef ONLINE_JUDGE
    fclose(stdout);
#endif

    // Perform the comparison
    bool result = compareFiles("../expected_output.txt", "../output.txt");

    // Print the result to the terminal
    if (result)
    {
        cerr << "Code Passed!" << endl;
    }
    else
    {
        cerr << "Code Failed!" << endl;
    }

    return 0;
}
