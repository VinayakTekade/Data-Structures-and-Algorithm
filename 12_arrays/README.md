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

# 2 Dimensional Arrays

It is similar to 2D matrices. It has rows and columns. Rows are horizontal arrays and Columns are vertical arrays. Hence a 3x3 matrix will have 3 rows and 3 columns. Consider it like Array of Arrays.

```
1 2 3
4 5 6
7 8 9
```

# Character Arrays

Arrays of characters is known as character arrays

```
char arr[n+1]
```

Notice we declare an array of size (n+1) where string is stored from 0 to n and (n+1)th character is the null character '\0' stating the end of the string.

# Searching

1. [Linear Search](./linearSearch.cpp)
2. [Binary Search](./binarySearch.cpp)
3. [Search in 2D Array](./search2D.cpp)

# Sorting

1. [Selection Sort](./selectionSort.cpp)
2. [Bubble Sort](./bubbleSort.cpp)
3. [Insertion Sort](./insertionSort.cpp)

# Challenges

## Basic Questions

1. [Find the minimum and maximum in an array of integers](./minMaxArr.cpp)
2. [Find the sum of all the elements in an array](./sumArr.cpp)
3. [Find the running sum of an Array](./runningsum.cpp)

## One Dimensional Arrays

1. [Given an array of size n. For every i from 0 to n-1 output max till the ith element](./maxTilli.cpp)
2. [Record Breaker](./recordBreaker.cpp)
3. [First Repeating Element](./firstRepeatingElement.cpp)
4. [Smallest Positive Missing Number](./missingNumber.cpp)

## Subarrays

1. [Print all subarrays](./subarrays.cpp)
2. [Sum of all subarrays](./sumSubArrays.cpp)
3. [Maximum Subarray Sum](./maxSumSubArrays.cpp)
4. [Maximum Circular Subarray Sum](./maxCircularSubarray.cpp)
5. [Longest Arithmetic Subarrays](./longArithmeticSubarray.cpp)
6. [Subarray with Given Sum](./subarrayWithGivenSum.cpp)
7. [Check if there exists two elements in an array such that their sum is equal to given k](./pairSumProblem.cpp)

## 2 Dimensional Arrays

1. [Spiral Order Matrix Traversal](./spiralOrder.cpp)
2. [Matrix Transpose](./matrixTranspose.cpp)
3. [Matrix Multiplication](./matMul.cpp)
4. [Sorted Matrix Search](./sortedMatrixSearch.cpp)

## Character Arrays

1. [Check if a character array is a palindrome](./palindrome.cpp)
2. [Larges Word in a sentence](./largestWord.cpp)
