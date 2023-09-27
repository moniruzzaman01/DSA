#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; //initiatized with no data and no size
    vector<int> v1(5); //initiatized with no data and size 5
    vector<int> v2(5,2); //initiatized with data 2 and size 5
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v3(arr, arr + 5);
    // vector<int> v4 = {1, 2, 3, 4};

    cout << v.size() << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v2[i] << " ";
    }

        return 0;
}