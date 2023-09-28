#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node *next;
};

int main()
{
        Node a, b, c;
        a.value = 100;
        b.value = 200;
        c.value = 300;
        a.next = &b;
        b.next = &c;
        cout << a.value << endl;
        cout << (*a.next).value << endl;
        cout << c.value << endl;

        return 0;
}