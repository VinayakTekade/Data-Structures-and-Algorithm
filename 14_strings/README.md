# Strings

Strings are dynamically allocated character arrays.

## Difference between Character Arrays and Strings

| Character Arrays                    | Strings                                                        |
| ----------------------------------- | -------------------------------------------------------------- |
| Need to know size beforehand        | No need to know size beforehand                                |
| Larger size required for operations | Performing operations like concatenantion and append is easier |
| No terminating extra character      | Terminated with a special character '\0'                       |

## Declaring a String

To use strings we need to include strings.h header file

```
#include<string>
```

To declare a string, we use it like a data type

```
string str;
```

## Initialising a String

```
string str1(5, 'n');            // "nnnnn"
string str2 = "VinayakTekade";
```

## Getting a string from a user

```
cin >> str; //Spaces will not work here
getline(cin , str) // Spaces will work here
```

Note: Whenever getline function and cin is used together we need to clear buffer using cin.ignore() method

## Displaying a String

```
cout << str;
cout << str[2]; // to get a char from string
```

## Operations on Strings

There are many inbuilt functions in String header file =

### Appending two strings

```
    string s1 = "fam", s2 = "ily";
    // s1.append(s2);
    s1 += s2; // "family"

```

### Clearing the whole string

```
    s1.clear();
```

### Comparing two Strings

```
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
```

### Checking whether a string is empty

```
    if (s1.empty())
    {
        cout << "string is empty" << endl;
    }
```

### Deleting characters and shifting the remaining characters

```
    string nin = "nincompoop";
    nin.erase(3, 3);     // erase(starting index, number of characters)
    cout << nin << endl; // ninpoop
```

### Searching a Substring

```
    cout << nin.find("poop") << endl; // returns first index of poop
```

### Inserting a String and Shifting the remaining character

```
    nin.insert(2, "lol");             // ninlolpoop
```

### Getting the size/length of the string

```
    cout << nin.size() << endl;   // 10
    cout << nin.length() << endl; // 10
```

### Getting a Substring from a string

```
    string s = nin.substr(6, 4); //substr(starting index, number of characters)
    cout << nin << endl;         // poop
```

### Converting String to Integer

```
    string num = "123";
    cout << stoi(num) + 4 << endl; //127
```

### Converting Integer to String

```
    int x = 123;
    cout << to_string(x) + "4" << endl; // 1234
```

### Sorting a String

```
    string seq = "afjwoxjioejfbs";
    sort(seq.begin(), seq.end());
    cout << seq << endl;

```

Note: To use sort we need to include algorithms.h header file

# Challenges

1. [Convert string to Uppercase or Lowercase](./case.cpp)
2. [Form the biggest number from a numeric string](./biggestNumber.cpp)
3. [Get the character with maximum occurance](./maxOccurance.cpp)
