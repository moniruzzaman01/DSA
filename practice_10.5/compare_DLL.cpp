#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node *prev;
        int value;
        Node *next;
    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
    }
    else 
    {
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void print_linked_list(Node *head)
{
    while(head!=NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
}
void compare_linked_list(Node *head, Node *head1)
{
    bool flag = true;
    while (head != NULL && head1 != NULL)
    {
        if (head->value != head1->value)
        {
            flag = false;
            break;
        }
        head = head->next;
        head1 = head1->next;
    }
    flag ? cout << "YES" : cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *head1 = NULL;
    int i = 0, j = 0;
    while (true)
    {
        int x;
        cin >> x;
        if(x==-1)
        {
            break;
        }
        i++;
        insert_at_tail(head, x);
    }
    while(true)
    {
        int x;
        cin >> x;
        if(x==-1)
        {
            break;
        }
        j++;
        insert_at_tail(head1, x);
    }
    if(i!=j)
    {
        cout << "NO";
    }
    else
    {
        compare_linked_list(head, head1);
    }

    return 0;
}