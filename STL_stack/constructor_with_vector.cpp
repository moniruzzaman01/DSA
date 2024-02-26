#include <bits/stdc++.h>
using namespace std;

class myStack
{
    private:
        vector<int> v;
    public:
    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return (v.size() == 0) ? true : false;
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    while(!st.isEmpty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}