#include <iostream>
using namespace std;
struct list
{
    int val;
    list *next;
};
list *input(int size)
{
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
list *merg(list *l1, list *l2)
{
    list *l3 = nullptr;
    list *b = nullptr;
    while (l1 != nullptr && l2 != nullptr)
    {
        list *p = new list();
        if (l1->val > l2->val)
        {
            p->val = l2->val;
            l2 = l2->next;
        }
        else
        {
            p->val = l1->val;
            l1 = l1->next;
        }
        p->next = nullptr;
        if (l3 == nullptr)
        {
            l3 = p;
        }
        else
        {
            b->next = p;
        }
        b = p;
    }
    while (l1 != nullptr)
    {
        list *p = new list();
        p->val = l1->val;
        l1 = l1->next;
        b->next = p;
        b = p;
    }
    while (l2 != nullptr)
    {
        list *p = new list();
        p->val = l2->val;
        l2 = l2->next;
        b->next = p;
        b = p;
    }
    return l3;
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
    int size1;
    cout << "Enter the size of L1 : " << endl;
    cin >> size1;
    cout << " enter the elements of L1 " << endl;
    list *L1;
    L1 = input(size1);
    int size2;
    cout << "Enter the size of L2: " << endl;
    cin >> size2;
    list *L2;
    cout << " enter the elements of L2 " << endl;
    L2 = input(size2);
    list *L3 = merg(L1, L2);
    output(L3);
    return 0;
}