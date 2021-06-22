# Arrays in C++

An Array is a data structure used to store blocks of information in contiguous memory allocation The data can be integer strings characters class objects etc

Syntax to declare an array:

```
dataType varible_name[size];
```

Example:

```
int intArray[100];
char charArray[100];
```

Initializing an Aray

```
int arr[4]={10,20,30,40};

cout << arr[3];  //30
```

Getting an Array from User

```
int size;
cin >> size;

int arr[size];

for(int i = 0; i < size; i++)
{
    cin >> arr[i];
}
```

Displaying all the elements in an array

```
for(int i = 0; i < size; i++)
{
    cout << arr[i];
}
```

# Subarray

Subarry is a continuous part of the array.
Number of subarrays of an array with n elements = nC2 + n = `n*(n+1)/2 `

# Subsequence

A subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaining elements.
Number of subsequences of an array with n elements = `2^n`

"Every Subarray is a subsequence but every Subsequence is not a subarray"

# Searching

1. [Linear Search](./linearSearch.cpp)
2. [Binary Search](./binarySearch.cpp)

# Sorting

1. [Selection Sort](./selectionSort.cpp)
2. [Bubble Sort](./bubbleSort.cpp)
3. [Insertion Sort](./insertionSort.cpp)

# Questions

1. [Find the minimum and maximum in an array of integers](./minMaxArr.cpp)
2. [Find the sum of all the elements in an array](./sumArr.cpp)
3. [Find the running sum of an Array](./runningsum.cpp)

# Challenges

## One Dimensional Arrays

1. [Given an array of size n. For every i from 0 to n-1 output max till the ith element](./maxTilli.cpp)
2. [Sum of all subarrays](./sumSubArrays.cpp)
3. [Longest Arithmetic Subarrays](./longArithmeticSubarray.cpp)
4. [Record Breaker](./recordBreaker.cpp)
5. [First Repeating Element](./firstRepeatingElement.cpp)
6. [Subarray with Given Sum](./subarrayWithGivenSum.cpp)
7. [Smallest Positive Missing Number](./missingNumber.cpp)
