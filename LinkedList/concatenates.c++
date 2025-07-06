#include <iostream>
using namespace std;
struct list {
    int val ;
    list* next ;
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
list *concatenates(list *L1 ,list* L2){
    list *p = L1 ;
    while (p->next != nullptr)
    {
        p = p->next ;
    }
    p->next = L2 ;
    return L1 ;
}
void output(list* l)
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
    cout << "Enter the size of L2 : " << endl;
    cin >> size2;
    list *L2;
    cout << " enter the elements of L2 " << endl;
    L2 = input(size2);
    list* L3 = concatenates(L1, L2) ;
    output(L3);
    return 0;
}