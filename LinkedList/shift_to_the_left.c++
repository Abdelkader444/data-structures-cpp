#include <iostream>
using namespace std;
struct list
{
    int val;
    list *next;
};
list *input(int size)
{
    cout << "Enter the elements: " << endl;
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
list* shift_to_the_left(list* l){
    if (l == nullptr || l->next ==nullptr)
    {
        return l ;
    }else{
        list* p = l ;
        list* q = p->next;
        while (q->next != nullptr)
        {
            p = q;
            q = q->next;
        }
        p->next = nullptr;
        q->next = l;
        return q;   
    }
}
void output(list *l)
{
    cout << "The result: " << endl;
    list *p = l;
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;
    list *l;
    l = input(size);
    l = shift_to_the_left ( l );
    
    cout << "The result: " << endl;
    list *p = l;
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }
    return 0;
}

