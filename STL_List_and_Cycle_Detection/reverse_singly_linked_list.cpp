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
void print_linked_list(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout << head->value << endl;
    print_linked_list(head->next);
}
void insert_at_tail(Node *head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void reverse_the_singly_list(Node *temp, Node *&head)
{
    if(temp->next==NULL)
    {
        head = temp;
        return;
    }
    reverse_the_singly_list(temp->next, head);
    temp->next->next = temp;
    temp->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    insert_at_tail(head, 20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    // print_linked_list(head);
    // cout << endl;
    reverse_the_singly_list(head,head);
    print_linked_list(head);

    return 0;
}