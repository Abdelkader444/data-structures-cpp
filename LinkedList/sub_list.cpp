#include <iostream>
using namespace std;
struct list
{
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
bool sub_list(list *l, list *l1){
    bool sub = false ;
    list *q = l ;
    list *s = l1;
    while( q != nullptr && sub == false){
        sub = true ;
        s = l1 ;
        if (q->val == s->val){
            list *p = q->next ;
            s = s->next ;
        while (p != nullptr && sub){
            if (s == nullptr){
                return sub ;
            }
            if (p->val != s->val){
                sub = false ;
            }
            s = s->next ;
        }
    }
        q = q->next ;
        sub = false ;
    }
    return sub ;
}
int main()
{
    int size, size1;
    cout << "Enter the size of list " << endl;
    cin >> size;
    list *l = input(size);
    cout << "Enter the size of small list" << endl;
    cin >> size1;
    list *l2 = input(size1);
    bool sub = sub_list(l, l2);
    if (sub)
    {
        cout << " yes , it is sub list "<<endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}