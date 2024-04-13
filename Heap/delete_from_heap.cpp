#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {30, 20, 25, 15, 5, 6, 3};
    for(int i:v)
    {
        cout << i << " ";
    }
    v[0] = v[v.size() - 1];
    v.pop_back();
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    int parent = 0;
    int len = v.size() - 1;
    while (true)
    {
        int left = (parent * 2) + 1;
        int right = (parent * 2) + 2;
        if(left<=len && right<=len)
        {
            if(v[left]>v[right] && v[left]>v[parent])
            {
                swap(v[parent], v[left]);
                parent = left;
            }
            else if(v[right]>v[left] && v[right]>v[parent])
            {
                swap(v[parent], v[right]);
                parent = right;
            }
            else
                break;
        }
        else if(left<=len)
        {
            if(v[left]>v[parent])
            {
                swap(v[left], v[parent]);
                parent = left;
            }
            else
                break;
        }
        // else if(right<=len)
        // {
        //     if(v[right]>v[parent])
        //     {
        //         swap(v[right], v[parent]);
        //         parent = right;
        //     }
        //     else
        //         break;
        // }
        else
        {
            break;
        }
    }
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}