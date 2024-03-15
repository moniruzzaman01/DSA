#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    cout << s << endl;
    stack<char> st;
    for(char c:s)
    {
        if(c=='('||c=='{'||c=='[')
        {
            st.push(c);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else
            {
                if (st.top()=='('&&c==')'||st.top()=='{'&&c=='}'||st.top()=='['&&c==']')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if(!st.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
    return true;
};

int main()
{
    bool result = isValid("[{})]]");
    cout << result << endl;

    return 0;
}