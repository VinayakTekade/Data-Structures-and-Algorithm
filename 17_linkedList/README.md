# Linked List

Linked List is a linear data structure that stores a list of values whose order of placement in memory is not contiguous.

## Arrays vs Linked Lists

Arrays are stored as a single block of memory with partition whereas Linked Lists are stored as multiple blocks of memory linked to each other using pointers.

## Limitations in Array

- Fixed size
- Contiguous block of memory
- Inserting or deleting is costly

## Properties of Linked List

- Size can be modified
- Non-contiguous memory
- Insertion and Deletion at any point is easier

## Structure of Linked List

```
 _____________         _____________
|      |      |       |      |      |
| Data | Next ------> | Data | Next ------> NULL
|______|______|       |______|______|

```

Here a node contains data to be stored along with a pointer that points to the next node where next set of data is stored. The last node contains pointer that points to next and hence we know that the Linked List has ended.

[Implementation and operation on a Linked List](./linkedList.cpp)

## Doubly Linked List

```
       ____________________
      |      |      |      |
<------ Prev | Data | Next ------>
      |______|______|______|

```

Here a node contains data to be stored along with a pointer that points to the next node and a pointer that points to the previous node. Hence the traversal could be done in both forward and backward direction.

[Implementation and operations on a Linked List](./doublyLinkedList.cpp)

## Circular Linked List

Here the structure of the linked list is similar to a singly linked list except that the last node instead of pointing to NULL points to the head node.

[Circular Linked List](./circularLL.cpp)

# Challenges

1. [Reverse a Linked List](./reverseLL.cpp)
2. [Reverse k nodes in a Linked List](./reverseKNodes.cpp)
3. [Removal of cycles in a Linked List](./cycleRemovalLL.cpp)
4. [Append last k nodes to start of a Linked List](./appendLastK.cpp)
5. [Intersection point of 2 Linked List](./intersectionLL.cpp)
6. [Merge 2 sorted Linked List](./mergeSortedLL.cpp)
7. [Put even elements after odd elements in linked list](./oddEvenLL.cpp)
