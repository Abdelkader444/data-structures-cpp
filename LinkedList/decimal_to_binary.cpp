#include <iostream>
using namespace std;
struct list
{
    int val;
    list *next;
};
list *decimal__binary(int x)
{
    list *l = new list();
    l = nullptr;
    while (x != 0)
    {
        list *p = new list();
        p->val = x % 2;
        x = x / 2;
        if (l != nullptr)
        {
            p->next = l;
        }
        l = p;
    }
    return l;
}
void output(list *l)
{
    cout << " the result : " << endl;
    list *p = l;
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }
}
int main()
{
    int x;
    cout << "enter the number on decimal" << endl;
    cin >> x;
    list *l = decimal__binary(x);
    output(l);
    return 0;
}