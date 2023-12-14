#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    cout << myList.front() << endl;
    list<int> list2(5);
    cout << list2.front() << endl;
    list<int> list3(5,5);
    cout << list3.front() << endl;

    list<int> list4;
    list4.assign(list3.begin(), list3.end());
    cout << list4.front() << endl;

    int arr1[] = {10, 20, 30, 40, 50};
    list<int> list6(arr1, arr1 + 5);
    cout << list6.front() << endl;

    vector<int> arr;
    arr.push_back(80);
    list<int> list5(arr.begin(), arr.end());
    cout << list5.front() << endl;

    list<int>::iterator it;
    for (it = list6.begin(); it != list6.end();it++)
    {
        cout << "y" << *it << endl;
    }

    // for(int value:list6)
    // {
    //     cout << "x" << value << endl;
    // }

    return 0;
}