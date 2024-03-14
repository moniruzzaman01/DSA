#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int m;
    cin >> m;
    while(m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int flag = 1;
    if (st.size() != q.size())
    {
        flag = 0;
    }
    else {
        int l = st.size();
        while(l--)
        {
            if(st.top()!=q.front())
            {
                flag = 0;
            }
            st.pop();
            q.pop();
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}