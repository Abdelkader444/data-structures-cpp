#include <iostream>
#include "stack.h"
using namespace std ;
stack<int> merg(stack<int> s1, stack<int> s2){
    stack<int> s ;
    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() > s2.top())
        {
            s.push(s1.pop()) ;
        }else{
            s.push(s2.pop()) ;
        }
    }
    while (!s1.empty())
    {
        s.push(s1.pop()) ;
    }
    while (!s2.empty())
    {
        s.push(s2.pop()) ;
    }
    return s ;
}
int main(){
    int size1 ;
    cout << "enter the size1 " << endl ;
    cin >> size1 ;
    stack<int> s1 = input<int>(size1);
    int size2 ;
    cout << "enter the size2 " << endl ;
    cin >> size2 ;
    stack<int> s2 = input<int>(size2);
    stack<int> s = merg(s1, s2);
    output(s) ;
    return 0 ;
}