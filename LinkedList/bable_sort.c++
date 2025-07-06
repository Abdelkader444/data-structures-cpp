#include <iostream>
using namespace std;
struct list {
    int val ;
    list *next ;
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
list *bable_sort(list *l){
    list *p = nullptr ;
    list *q = nullptr ;
    int x ;
    bool sorted = false ;
    while(sorted == false){
        sorted = true ;
        p = l ;
        q = l->next ;
    while ( q != nullptr){
        if ( p->val > q->val){
            x = p->val ;
            p->val = q->val ;
            q->val = x ;
            sorted = false ;
        }
        p = p->next ;
        q = q->next ;
    }
    } 
    return l ;     
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
    l = bable_sort(l);
    output(l);
    return 0;
}

