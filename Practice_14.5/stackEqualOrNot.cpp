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

class myStack{
    private:
        Node *head;
        Node *tail;
        int sz;

    public:
        myStack() : head(NULL), tail(NULL), sz(0){};

        void push(int value)
        {
            Node *newNode = new Node(value);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                sz++;
            }
            else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
            sz++;
            }
    }
        void pop(){
            if(head->next==NULL)
            {
                head = NULL;
                tail = NULL;
                return;
            }
            Node *deletedNode = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete deletedNode;
        }
        int top(){
            return tail->value;
        }
        int size(){
            return sz;
        }
};

int main()
{
    myStack st1;
    myStack st2;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    int flag = 1;
    if (st1.size() != st2.size())
    {
        flag = 0;
    }
    else
    {
        int l = st1.size();
        while (l--)
        {
            if(st1.top() != st2.top())
            {
                flag = 0;
            }
            st1.pop();
            st2.pop();
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;

    }

    return 0;
}