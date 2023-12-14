#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a={1,2};
    a.push_back(5);
    a.push_back(2);
    a.push_back(4);
    a.push_back(50);
    cout << endl;
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end();it++)
    {
        cout << *it << endl;
    }
    for(int value:a)
    {
        cout << value << endl;
    }

        return 0;
}