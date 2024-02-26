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
class myQueue{
    Node *head;
    Node *tail;
    int size;
public:
    myQueue() : head(NULL),tail(NULL),size(0){}
    void push(int value)
    {
        Node *newNode = new Node(value);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        size++;
    }
    void pop(){
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        size--;
        if(head==NULL)
        {
            tail = NULL;
        }
    }
    int front(){
        return head->value;
    }
    bool empty(){
        // cout << "size" << size << endl;
        if (size == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue q;
    q.push(10);
    q.push(20);
    if(!q.empty())
        cout << q.front() << endl;
    if(!q.empty())
        q.pop();
    if(!q.empty())
        cout << q.front() << endl;
    if(!q.empty())
        q.pop();
    q.push(100);
    q.push(200);
    if(!q.empty())
        cout << q.front() << endl;

    return 0;
}