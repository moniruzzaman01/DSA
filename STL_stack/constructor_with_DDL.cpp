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
void remove_from_tail(Node *&head, Node *&tail)
{
    if(head==NULL)
    {
        return;
    }
    Node *deletedNode = tail;
    tail = tail->prev;
    delete deletedNode;
}

class ddl_stack{
    private:
        Node *head = NULL;
        Node *tail = NULL;
    public:
        void push(int value)
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
        // void pop()
        // {
        //     remove_from_tail(this->head, this->tail);
        // }
        // int top()
        // {
            
        // }
        // int size()
        // {
            
        // }
        // int inError()
        // {
            
        // }
};

int main()
{
    ddl_stack x;
    x.push(10);
    x.push(20);
    x.push(30);

    return 0;
}