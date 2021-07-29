#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

bool search(node *head, int key)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == key)
        {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

void deleteAtHead(node *&head)
{
    node *toDelete = head;

    head = head->next;

    delete toDelete;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteAtHead(head);
    }

    node *tmp = head;
    while (tmp->next->data != val)
    {
        tmp = tmp->next;
    }

    node *toDelete = tmp->next;
    tmp->next = tmp->next->next;

    delete toDelete;
}

node *reverseKNodes(node *&head, int k)
{
    node *previous = NULL, *current = head, *nextptr;
    int count = 0;

    while (current != NULL && count < k)
    {
        nextptr = current->next;
        current->next = previous;

        previous = current;
        current = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {
        head->next = reverseKNodes(nextptr, k);
    }

    return previous;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    cout << "The original Linked List is:" << endl;
    display(head);
    cout << "The reversed Linked List is:" << endl;
    node *newhead = reverseKNodes(head, 2);
    display(newhead);
    return 0;
}