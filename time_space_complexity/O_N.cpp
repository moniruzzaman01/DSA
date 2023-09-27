#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //O(1)
    cin >> n; //O(1)
    int arr[n]; //O(1)
    for (int i = 0; i < n; i++) //O(n)
    {
        cin >> arr[i];
    }
    int sum = 0; //O(1)
    for (int i = 0; i < n; i++) //O(n)
    {
        sum += arr[i];
    }
    cout << sum; //O(1)
    return 0;
}

//O(n+n)->O(2n)->O(n)