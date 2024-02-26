#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    if (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}