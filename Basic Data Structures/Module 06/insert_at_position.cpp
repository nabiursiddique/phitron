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

void insert_at_tail(Node *&head, int val)
{
    // creating a new node
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    cout << "Your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted at position " << pos << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int position, value;
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            insert_at_position(head, position, value);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}