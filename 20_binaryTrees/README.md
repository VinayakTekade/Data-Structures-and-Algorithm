# Binary Trees

## Tree

A tree is a non linear data structure that represents a collection data as nodes that are linked together to represent a hierarchy.

The following is a visualisation of a tree

```
      1
    / | \
   2  3  4
  / \ |   \
 5  6 7    8
            \
             9
```

## Binary Tree

A binary tree is a special type of tree where a node can have maximum two children.

The following is a visualisation of a binary tree

```
      1
     /  \
    2    4
   / \    \
  5   6     8
           /  \
          9    10
```

## Properties of Binary Tree

1. Maximum nodes at level L = 2^L
2. Maximum nodes in a tree of height H = 2^H - 1
3. For N nodes, minimum possible height = log(N+1)

[Implementation of Binary Tree](./binaryTree.cpp)

## Traversal

1. [Preorder Traversal](./preorderTraversal.cpp)
2. [Inorder Traversal](./inorderTraversal.cpp)
3. [Postorder Traversal](./postorderTraversal.cpp)
4. [Levelorder Traversal](./levelorderTraversal.cpp)

## Build Tree

1. [Build Tree from Preorder and Inorder Arrays](./preInTree.cpp)
2. [Build Tree from Postorder and Inorder Arrays](./postInTree.cpp)

## Challenges

1. [Sum of Nodes at Kth level](./sumKthLevel.cpp)
2. [Count the total number of nodes](./countAllNodes.cpp)
3. [Sum of All nodes](./sumOfAllNodes.cpp)
4. [Height of a Binary Tree](./heightBT.cpp)
5. [Sum replacement in Binary Tree](./sumReplacement.cpp)
