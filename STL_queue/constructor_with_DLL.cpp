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
class myQueue{
private:
    Node *head;
    Node *tail;
    int sz;

public:
    myQueue() : head(NULL), tail(NULL), sz(0) {}

    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;
        if(head==NULL)
        {
            tail = NULL;
            delete deletedNode;
            return;
        }
        head->prev=NULL;
        delete deletedNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue q;
    q.push(10);
    cout << q.front() << endl;
    if(!q.empty())
        q.pop();
    if(!q.empty())
        cout << q.front() << endl;
    q.push(100);
    cout << q.front() << endl;
    cout << q.front() << endl;
    q.pop();
    return 0;
}