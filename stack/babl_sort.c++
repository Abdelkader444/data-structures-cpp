#include <iostream>
#include <stack>
using namespace std ;
stack<int> input(int size)
{
    cout << "enter the elements" << endl;
    int n;
    stack<int> l;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        l.push(n);
    }
    return l;
}
stack<int> babl_sort(stack<int> l){
    stack<int> p ;
    bool sorted = true ;
    int x,n ;
    while( l.empty() == false){
        x = l.top() ;
        l.pop() ;
        if (l.empty()){
            p.push(x);
            break ;
        }
        if(l.top() < x){
            n = l.top();
            l.pop();
            p.push(n);
            sorted = false ;
            l.push(x);
        }else{
            p.push(x);
        }
    }
    while( p.empty() == false){
        x = p.top() ;
        l.push(x) ;
        p.pop() ;
    }
    if (sorted == false)
    {
        return babl_sort(l) ;
    }else{
        return l ;
    }
}
void output(stack<int> l)
{
    int x ;
    while (l.empty() == false)
    {
        x = l.top();
        cout << x << " ";
        l.pop();
    }
    cout <<endl ;
}
int main()
{
    int size;
    cout << "enter the size " << endl;
    cin >> size;
    stack<int> l = input(size);
    l = babl_sort(l) ;
    output(l);
    return 0;
}