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
        }
        else
        {
            q->next = p;
        }
        q = p;
    }
    return l;
}
bool check_sorting(list *l)
{
    bool s = true;
    list *p = l;
    list *q = l->next;
    while (q != nullptr && s)
    {
        if (p->val > q->val)
        {
            s = false;
        }
        p = p->next;
        q = q->next;
    }
    return s;
}
int main()
{
    int size;
    cout << "Enter the size : " << endl;
    cin >> size;
    list *l;
    l = input(size);
    bool s = check_sorting(l);
    if (s)
    {
        cout << "your list it sorting " << endl;
    }
    else
    {
        cout << "your list it not sorting " << endl;
    }
    return 0;
}
