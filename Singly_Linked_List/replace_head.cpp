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

void insert_at_any_position(Node *&head, int value, int pos)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        int i = 1;
        if(pos==1)
        {
            newNode->next = head->next;
            head = newNode;
        }
        while (temp->next != NULL)
        {
            if(i==pos-1)
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            i++;
            temp = temp->next;
        }
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
    insert_a_tail(head, 10);
    insert_a_tail(head, 20);
    insert_a_tail(head, 30);
    insert_a_tail(head, 40);
    insert_a_tail(head, 50);

    insert_at_any_position(head, 300, 1);
    insert_at_any_position(head, 200, 4);

    print_linked_list(head);

    return 0;
}

