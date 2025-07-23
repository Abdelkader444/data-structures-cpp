#include <iostream>
using namespace std;
template <typename t>
struct list {
    t val ;
    list* next ;
};
template <typename t>
struct stack {
    list<t>* top1 ;
    stack(){
        top1 = nullptr ;
    }
    stack(const stack<int>& l){
        if ( l.top1 == nullptr){
            top1 = nullptr ;
            return ;
        }
        top1 = new list<t> ;
        top1->val = l.top1->val ;
        top1->next = nullptr ; 
        list<t> *q = l.top1->next ;
        list<t> *s = top1 ;
        while(q != nullptr){
            list<t> *p = new list<t> ;
            p->val = q->val ;
            p->next = nullptr ;
            s->next = p ;
            s = s->next ;
            q = q->next ;
        }   
    }

    void push(int n){
        list<t> *l = new list<t> ;
        l->val = n ;
        l->next = top1 ;
        top1 = l ;
    }
        int pop(){
        if (top1 == nullptr){
            cout << "error"<< endl;
            return 0;
        }
        t x = top1->val ;
        list<t>* temp = top1 ;
        top1 = top1->next ;
        delete temp ;
        return x ;
    }
    t top(){
        if (top1 == nullptr){
            cout << "error" <<endl ;
            return t() ;
        }
        return top1->val ;
    }
    bool empty(){
        if(top1 == nullptr){
            return true ;
        }
            return false ;
    }
};
template <typename t>
stack<t> input(int size)
{
    cout << "enter the elements" << endl;
    t n;
    stack<t> l ;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        l.push(n);
    }
    return l;
}
template <typename t >
void output(stack<t> l)
{
    t x ;
    stack<t> s ;
    while (!l.empty())
    {
        x = l.pop() ;
        s.push(x) ;
    }
    while (!s.empty())
    {
        x = s.pop() ;
        cout << x << " " ;
    }
    
    cout <<endl ;
}