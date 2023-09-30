#include <bits/stdc++.h>
using namespace std;
void fun(int **&p)
{
    p = NULL;
    cout << "in " << p << endl;
}
int main()
{
    int a = 15;
    int *ptr = &a;
    int **ptr2 = &ptr;
    fun(ptr2);
    cout << "a " << &a << endl;
    cout << "ptr " << &ptr << endl;
    cout << "ptr2 " << &ptr2 << endl;

    return 0;
}