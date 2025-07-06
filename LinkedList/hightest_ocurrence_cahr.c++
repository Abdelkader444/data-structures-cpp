#include <iostream>
using namespace std;
struct list
{
    char val;
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
int frequency(list *l, char x)
{
    list *p = l;
    if (p == nullptr)
    {
        return 0;
    }
    else
    {
        int n = 0;
        while (p != nullptr)
        {
            if (p->val == x)
            {
                n++;
            }
            p = p->next;
        }
        return n;
    }
}
char hightest_ocurrence_cahr(list *l)
{
    list *p = l;
    int n;
    char a = l->val;
    int max = frequency(l, a);
    while (p != nullptr)
    {
        n = frequency(l, p->val);
        if (n > max)
        {
            max = n;
            a = p->val;
        }
        p = p->next;
    }
    return a;
}
int main()
{
    int size;
    cout << " Enter the size " << endl;
    cin >> size;
    if (size == 0)
    {
        cout << " Error";
    }
    else
    {
        list *l = input(size);
        char x = hightest_ocurrence_cahr(l);
        cout << "the hightest number of occurence to the character it : " << x << endl;
    }
    return 0;
}