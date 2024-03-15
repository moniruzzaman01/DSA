#include <bits/stdc++.h>
using namespace std;

int getSumOfAStack(stack<int>s)
{
    int sum = 0;
    while(!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    return sum;
}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    // Write your code here
    int sum1 = getSumOfAStack(stk1);
    int sum2 = getSumOfAStack(stk2);
    int sum3 = getSumOfAStack(stk3);
    while(true)
    {
        if(sum1==sum2 && sum1==sum3)
        {
            break;
        }
        else if(sum1>=sum2 && sum1>=sum3)
        {
            sum1 -= stk1.top();
            stk1.pop();
        }
        else if(sum2>=sum1 && sum2>=sum3)
        {
            sum2 -= stk2.top();
            stk2.pop();
        }
        else
        {
            sum3 -= stk3.top();
            stk3.pop();
        }
    }
    return sum1;
}

int main()
{
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    st1.push(3);
    st1.push(5);
    st1.push(8);
    st2.push(2);
    st2.push(2);
    st2.push(4);
    st2.push(9);
    st2.push(6);
    st3.push(2);
    st3.push(1);
    st3.push(2);
    st3.push(3);
    int result = maxSum(st1, st2, st3);
    cout << result << endl;

    return 0;
}