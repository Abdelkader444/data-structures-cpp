#include <iostream>
using namespace std;
struct list
{
    int val ;
    list *next ;
};
list *input(int size){
    cout << " enter the element " <<endl ;
    list *l = nullptr ;
    list *q = nullptr ;
    for (int i = 0; i < size; i++)
    {
        list *p = new list() ;
        cin >> p->val ;
        if ( l == nullptr){
            l = p ;
        }else{
            q->next = p ;
        }
        q = p ;
    }
    return l ;
}
void explode(list *l, list* &l1, list* &l2,int size1){
    l1 = l ;
    for (int i = 1; i < size1; i++)
    {
        l = l->next ;
    }
    l2 = l->next ;
    l->next = nullptr ;
}
void output(list *l){
    list *p = l;
    while (p != nullptr)
    {
        cout << p->val << " " ;
        p = p->next ;
    }
    cout <<endl ;
}
int main(){
    int size, size1 ;
    cout << "enter the size " << endl ;
    cin >> size ;
    list *l =input(size) ;
    cout << "enter the size1  " << endl ;
    cin >> size1 ;
    list *l1, *l2;
    explode(l,l1,l2,size1) ;
    cout << "l1 = " ;
    output(l1) ;
    cout << "l2 = " ;
    output(l2) ;
    return 0 ;
}
