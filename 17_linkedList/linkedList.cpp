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
    display(head);
    insertAtHead(head, 5);
    display(head);
    cout << search(head, 6) << endl;
    deletion(head, 3);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}