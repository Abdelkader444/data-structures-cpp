#include <iostream>
using namespace std;
struct list
{
    int val;
    list *next;
};
list *input(int size)
{
    cout << " enter the elements " << endl;
    list *l = nullptr;
    list *q = nullptr;
    for (int i = 0; i < size; i++)
    {
        list *p = new list();
        cin >> p->val;
        if (l == nullptr)
        {
            l = p;
            q = l;
        }
        else
        {
            q->next = p;
        }
        q = p;
    }
    return l;
}
list *replace(int x, int y, list *l)
{
    list *p = l;
    while (p != nullptr)
    {
        if (p->val == x)
        {
            p->val = y;
        }
        p = p->next;
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
    int size, x, y;
    cout << "Enter the size : " << endl;
    cin >> size;
    list *l;
    l = input(size);
    cout << " Enter X and Y " << endl;
    cin >> x >> y;
    l = replace(x, y, l);
    output(l);
    return 0;
}