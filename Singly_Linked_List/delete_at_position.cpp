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
        if(pos==1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            int i = 1, flag = 1;
            while (temp->next != NULL)
            {
                if(i==pos-1)
                {
                    newNode->next = temp->next;
                    temp->next = newNode;
                    flag = 0;
                    break;
                }
                i++;
                temp = temp->next;
            }
            if(flag)
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }
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
void delete_at_position(Node *&head,int pos)
{
    Node *temp = head;
    if(pos==1)
    {
        
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
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

    delete_at_position(head, 1);

    print_linked_list(head);

    return 0;
}

