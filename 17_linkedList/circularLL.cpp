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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    node *tmp = head;
    while (tmp->next != head)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *tmp = head;

    while (tmp->next != head)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *tmp = head;
    do
    {
        cout << tmp->data << " -> ";
        tmp = tmp->next;
    } while (tmp->next != head);

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
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *toDelete = head;

    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    if (head->next == NULL)
    {
        deleteAtHead(head);
    }

    node *tmp = head;
    int count = 1;
    while (count != pos)
    {
        tmp = tmp->next;
        count++;
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
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    deletion(head, 1);
    display(head);
    return 0;
}