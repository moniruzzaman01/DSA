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
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
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
void check_palindrome(Node *head, Node *tail)
{
    bool flag = true;
    while (head!=NULL)
    {
        if (head->value != tail->value)
        {
            flag = false;
            break;
        }
        head = head->next;
        tail = tail->prev;
    }
    flag ? cout << "YES" : cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if(x==-1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
    check_palindrome(head, tail);

    return 0;
}