#include <bits/stdc++.h>
using namespace std;

class listStack{
    private:
        list<int> l;
    public:
        void push(int value)
        {
            l.push_back(value);
        }
        void pop()
        {
            l.pop_back();
        }
        int top()
        {
            return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool isEmpty()
        {
            return l.empty();
        }
};

int main()
{
    listStack x;
    x.push(10);
    x.push(20);
    x.push(30);

    while (!x.isEmpty())
    {
        cout << x.top() << endl;
        x.pop();
    }

    return 0;
}