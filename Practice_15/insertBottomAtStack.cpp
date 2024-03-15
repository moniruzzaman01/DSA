#include <bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> temp;
    while(!myStack.empty())
    {
        temp.push(myStack.top());
        myStack.pop();
    }
    temp.push(x);
    while(!temp.empty())
    {
        myStack.push(temp.top());
        temp.pop();
    }
    return myStack;
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int> result = pushAtBottom(st,1);
    while(!result.empty())
    {
        cout << result.top() << endl;
        result.pop();
    }

    return 0;
}