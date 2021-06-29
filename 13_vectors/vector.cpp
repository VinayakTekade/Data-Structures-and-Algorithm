#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 5, 566);
    display(vec1);

    vector<char> vec2(4);
    vector<char> vec3(vec2);

    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}