#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin >> x;
    v.push_back(x);
    for(int i:v)
    {
        cout << i << " ";
    }
    cout << endl;
    int index = v.size() - 1;
    while (true)
    {
        int parentIndex = (index - 1) / 2;
        if (index == 0 || v[index] <= v[parentIndex])
            break;
        if (v[index] > v[parentIndex])
        {
            // int temp = v[parentIndex];
            // v[parentIndex] = v[index];
            // v[index] = temp;
            swap(v[index], v[parentIndex]);
            index = parentIndex;
        }
    }
    for(int i:v)
    {
        cout << i << " ";
    }

    return 0;
}