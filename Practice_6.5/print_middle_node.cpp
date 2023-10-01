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

void insert_at_tail(Node *&head,int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int linked_list_size(Node *head)
{
    Node *temp = head;
    int i = 0;
    while(temp!=NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}

void print_middle_node(Node *head,int len)
{
    Node *temp = head;
    int i = 1;
    int condition = len % 2 == 0 ? true : false;
    while (temp != NULL)
    {
        if(condition)
        {
            (i == len / 2 || i == len / 2 + 1) && cout << temp->value << " ";
        }
        else
        {
            i == len / 2 + 1 && cout << temp->value;
        }
        i++;
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    int x;
    while (true)
    {
        cin >> x;
        if(x==-1)
            break;
        insert_at_tail(head, x);
    }
    // print_linked_list(head);
    int len = linked_list_size(head);
    print_middle_node(head, len);

    return 0;
}