#include <bits/stdc++.h>
using namespace std;
void insert_in_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int child = v.size() - 1;
    while(true)
    {
        int parent = (child - 1) / 2;
        if(child==0)break;
        else if(v[parent]>v[child])
        {
            swap(v[parent], v[child]);
            child = parent;
        }
        else break;
    }
}
int delete_from_heap(vector<int>&v)
{
    int val = v[0];
    v[0] = v[v.size() - 1];
    v.pop_back();

    int parent = 0;
    int len = v.size() - 1;
    while (true)
    {
        int left = (parent * 2) + 1;
        int right = (parent * 2) + 2;
        if(left<=len && right<=len)
        {
            if(v[left] <= v[right] && v[left] < v[parent])
            {
                swap(v[parent], v[left]);
                parent = left;
            }
            else if(v[right] <= v[left] && v[right] < v[parent])
            {
                swap(v[parent], v[right]);
                parent = right;
            }
            else break;
        }
        else if(left<=len)
        {
            if(v[left] < v[parent])
            {
                swap(v[parent], v[left]);
                parent = left;
            }
            else break;
        }
        // else if(right<=len)
        // {
        //     if(v[right] > v[parent])
        //     {
        //         swap(v[parent], v[right]);
        //         parent = right;
        //     }
        //     else break;
        // }
        else break;
    }
    return val;
}
int main()
{
    vector<int> nums = {5,1,1,2,0,0};
    vector<int> v;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        insert_in_heap(v, nums[i]);
    }
    cout << v.size() << endl;
    vector<int> x;
    while(v.size())
    {
        int p = delete_from_heap(v);
        x.push_back(p);
    }
    for(int i:x)
        cout << i << " ";

        return 0;
}