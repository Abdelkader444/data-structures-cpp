#include <iostream>
#include "stack.h"
using namespace std ;
stack<int> remove_x(stack<int> l, int x){
    stack<int> s ;
    while(!l.empty()){
        if (l.top() != x){
           s.push(l.top()) ;
        }
        l.pop() ;
    }
    return s ;
}
int main()
{
    int size, x ;
    cout << "enter the size of stack " << endl;
    cin >> size;
    stack<int> s = input(size);
    cout << " enter the nuber you want remove" << endl;
    cin >> x ;
    s = remove_x(s, x) ;
    cout << "the result" << endl ;
    output(s) ;
    return 0;
}