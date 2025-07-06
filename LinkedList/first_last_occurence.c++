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
int fist_occurence(int x, list *l)
{
    list *p = l;
    int n = 1;
    while (p != nullptr)
    {
        if (p->val == x)
        {
            return n;
        }
        n++;
        p = p->next;
    }
    return 0;
}
int last_occurence(int x, list *l)
{
    list *p = l;
    int n, m;
    n = 1;
    while (p != nullptr)
    {
        if (p->val == x)
        {
            m = n;
        }
        n++;
        p = p->next;
    }
    return m;
}
int main()
{
    int size, x, n, m;
    cout << " Enter the size " << endl;
    cin >> size;
    cout << "Enter X " << endl;
    cin >> x;
    list *l = input(size);
    n = fist_occurence(x, l);
    m = last_occurence(x, l);
    if (n == 0)
    {
        cout << "not found x" << endl;
    }
    else
    {
        cout << "the first occurence = " << n << endl;s
        cout << "the last occurence = " << m << endl;
    }
    return 0;
}