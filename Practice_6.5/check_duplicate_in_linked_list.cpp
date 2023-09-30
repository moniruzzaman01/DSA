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

void check_duplicate(Node *head)
{
    int flag = 0;
    Node *temp1 = head;
    while (temp1!=NULL)
    {
        Node *temp2 = temp1->next;
        while(temp2!=NULL)
        {
            if(temp1->value==temp2->value)
            {
                flag++;
                break;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
        if(flag)
            break;
    }
    flag ? cout<<"YES" : cout<<"NO";
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
    check_duplicate(head);

    return 0;
}