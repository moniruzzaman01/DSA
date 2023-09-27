#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 10, 30, 50, 60, 10};
    vector<int> v(arr, arr + 10);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    replace(v.begin(), v.end(), 10, 0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}