#include <bits/stdc++.h>
using namespace std;

class myQueue{
    private:
        list<int> l;

    public:
        void push(int value){
            l.push_front(value);
        }
        void pop(){
            l.pop_front();
        }
        int front(){
            return l.front();
        }
        int size(){
            return l.size();
        }
        bool empty(){
            return l.empty();
        }

};

int main()
{
    myQueue q;
    q.push(10);
    
    cout << q.front() << endl;
    cout << q.size() << endl;
    q.pop();
    cout << q.empty() << endl;

    return 0;
}