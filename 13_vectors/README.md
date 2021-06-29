# Vectors in C++

Vectors are sequence containers representing arrays that can change in size.

## Declaring a Vector

```
vector<int> vec1;       // Initialises an empty vector vec1 of type of int
vector<int> vec2(4);    // Initialises a vector vec2 of size 4
vector<int> vec3(4, 0); // Initialises a vector vec3 of size 4 and with all values 0
vector<int> vec4(vec3); // Copies vec3 in new vector vec4
```

## Getting a Vector from user

```
vector<int> vec1;
    int element, size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to vector: ";
        cin >> element;
        vec1.push_back(element); // pushes element to the end of vec1 and automatic resize the array
    }
```

## Displaying a Vector

```
 for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;
```

## Inserting Elements

```
vec1.push_back(5);                            //Inserts 5 to end

 vector<int>::iterator first = vec1.begin(); // gets index of first element
 vector<int>::iterator last = vec1.end();   // gets index of last element
 vec1.insert(first + 1, 5, 566);             // inserts five 566 starting from 2nd index
```

## Deleting Elements

```
vec1.pop_back();                        // deletes last element

vec1.insert(first + 2);                 // deletes 3rd index
vec1.insert(first + 2, first+5);        // deletes from 3rd index to 6th index
```

## 2D Vectors

### Declaring a 2D vector

```
vector<vector<int>> vec2{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
```

### Displaying a 2D vector

```
 for (int i = 0; i < vec2.size(); i++)
    {
        for (int j = 0; j < vec2[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
```
