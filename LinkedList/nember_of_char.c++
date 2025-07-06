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
int main()
{
    int size, n;
    cout << "Enter the size " << endl;
    cin >> size;
    char x;
    cout << "Enter the character" << endl;
    cin >> x;
    list *l;
    l = input(size);
    n = frequency(l, x);
    if (n == 0)
    {
        cout << " not found the charcter ";
    }
    else
    {
        cout << "the number of occurence to the charcter = " << n;
    }
    return 0;
}