#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Brute Force Method
// int calcHeight(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int leftHeight = calcHeight(root->left);
//     int rightHeight = calcHeight(root->right);
//     int height = max(leftHeight, rightHeight) + 1;

//     return height;
// }

// int calcDiameter(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int leftHeight = calcHeight(root->left);
//     int rightHeight = calcHeight(root->right);
//     int currDia = leftHeight + rightHeight + 1;

//     int leftDia = calcDiameter(root->left);
//     int rightDia = calcDiameter(root->right);

//     return max(currDia, max(leftDia, rightDia));
// }

int calcDiameter(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int ltHeight = 0, rtHeight = 0;
    int ltDia = calcDiameter(root->left, &ltHeight);
    int rtDia = calcDiameter(root->right, &rtHeight);

    int currDia = ltHeight + rtHeight + 1;

    *height = max(ltHeight, rtHeight) + 1;

    return max(currDia, max(ltDia, rtDia));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = 0;
    cout << calcDiameter(root, &height);

    return 0;
}