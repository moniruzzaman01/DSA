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

void insert_a_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    Node *temp = head;
    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    while (n)
    {
        int x;
        cin >> x;
        insert_a_tail(head, x);
        n--;
    }

    print_linked_list(head);

    return 0;
}