#include <iostream>
#include <stack>
using namespace std;
stack<int> input(int size)
{
    cout << "enter the elements" << endl;
    int n;
    stack<int> l;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        l.push(n);
    }
    return l;
}
void output(stack<int> l)
{
    int x ;
    while (l.empty() == false)
    {
        x = l.top();
        cout << x << " ";
        l.pop();
    }
    cout <<endl ;
}
int main()
{
    int size;
    cout << "enter the size " << endl;
    cin >> size;
    stack<int> l = input(size);
    output(l);
    return 0;
}