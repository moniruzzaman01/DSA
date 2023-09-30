#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){
    cout << "in-" << p << endl;
    p = NULL;
}
int main()
{
    int a = 10;
    int *ptr = &a;
    fun(ptr);
    cout << ptr << endl;
    // cout << "out-" << *ptr << endl; // this line will throw an error. because from function i changed the address of "ptr". as they are connected by reference(&) so after 5th line now "ptr" has no pointer in it. it's mean "ptr" lost it's connection with variable "a".

    return 0;
}