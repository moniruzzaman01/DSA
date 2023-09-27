#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 10, 30, 50, 60, 10};
    vector<int> v(arr, arr + 10);
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 200);
    cout << *it << endl;
    if(it==v.end())
        cout << "not found";
    else
        cout << "found";

    return 0;
}