#include <iostream>
using namespace std;
int power(int x , int y ){
    int n = 1 ;
    for (int i = 0; i < y; i++)
    {
        n = n * x  ;
    }
    return n ;
}
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
int binary_to_decimal(list *l,int size){
    int n = 0 ;
    while (l != nullptr){
        size = size - 1 ;
        n = n + l->val * power(2, size) ;
        l = l->next ;
    }
    return n ;
}
int main()
{
    int size;
    cout << "Enter the size : " << endl;
    cin >> size;
    list *l;
    l = input(size);
    int n = binary_to_decimal(l, size);
    cout << n << endl ;
    return 0;
}