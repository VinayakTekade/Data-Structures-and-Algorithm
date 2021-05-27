#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    //Variables and Data types
    int a;  //variable declaration
    a = 12; //initialisation

    cout << "size of int is " << sizeof(a) << " bytes" << endl; //4 bytes

    float b;
    cout << "size of float is " << sizeof(b) << " bytes" << endl; //4 bytes

    char c;
    cout << "size of char is " << sizeof(c) << " bytes" << endl; //1 bytes

    bool d;
    cout << "size of bool is " << sizeof(d) << " bytes" << endl; //1 bytes

    //Type Modifiers
    signed int e;                                                      // range = -2,147,438,648 to 2,147,438,647
    cout << "size of signed int is " << sizeof(e) << " bytes" << endl; //4 bytes

    unsigned int f;                                                      //range = 0 to 4,294,967,295
    cout << "size of unsigned int is " << sizeof(f) << " bytes" << endl; //4 bytes

    long int g;                                                      //range =-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    cout << "size of long int is " << sizeof(g) << " bytes" << endl; //4 bytes

    long long h;
    cout << "size of long long is " << sizeof(h) << " bytes" << endl; //8 bytes

    short int i;                                                      //range -32,768 to 32,767
    cout << "size of short int is " << sizeof(i) << " bytes" << endl; //2 bytes

    return 0;
}