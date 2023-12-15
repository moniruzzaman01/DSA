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
void print_linked_list_asc(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout << head->value << " ";
    print_linked_list_asc(head->next);
}
void print_linked_list_des(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    print_linked_list_des(head->next);
    cout << head->value << " ";
}
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
void insert_at_index(Node *&head, int index, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        print_linked_list_asc(head);
        cout << endl;
        print_linked_list_des(head);
        cout << endl;
        return;
    }
    if(index==0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        print_linked_list_asc(head);
        cout << endl;
        print_linked_list_des(head);
        cout << endl;
        return;
    }
    int i = 0;
    bool flag = true;
    while (temp != NULL)
    {
        if(i==index-1)
        {
            if(temp->next)
                temp->next->prev = newNode;
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
            flag = false;
            print_linked_list_asc(head);
            cout << endl;
            print_linked_list_des(head);
            cout << endl;
        }
        i++;
        temp = temp->next;
    }
    flag &&cout << "Invalid" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        insert_at_index(head, x, v);
    }

    return 0;
}