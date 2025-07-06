#include <iostream>  // Header file for input/output
using namespace std; // Avoids writing std:: before functions

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
    int size;
    cout << "Enter the size : " << endl;
    cin >> size;
    list *l;
    l = input(size);
    output(l);
    return 0;
}