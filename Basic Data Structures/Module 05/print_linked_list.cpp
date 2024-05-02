#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->value << endl;
    // cout << head->next->value << endl;
    // cout << head->next->next->value << endl;
    // cout << head->next->next->next->value << endl;
    // cout << head->next->next->next->next->value << endl;

    //! We don't move head pointer because if we move the head pointer then if we want to print again we will not be able to find the head pointer because it will be NULL.

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}

//* video 5-7 of basic data structure