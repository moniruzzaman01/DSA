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
    cout << endl;
}

void insert_at_position(Node *&head, int pos, int value)
{
    Node *temp = head;
    Node *newNode = new Node(value);
    int flag = 0;
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        flag++;
    }
    else
    {
        int i = 0;
        while(temp!=NULL)
        {
            if(i==pos-1)
            {
                newNode->next = temp->next;
                temp->next = newNode;
                flag++;
                break;
            }
            i++;
            temp = temp->next;
        }
    }
    if(!flag)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        print_linked_list(head);
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
    int test_case;
    cin >> test_case;
    while(test_case)
    {
        int x, y;
        cin >> x >> y;
        insert_at_position(head, x, y);
        test_case--;
    }

    return 0;
}