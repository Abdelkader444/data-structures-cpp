#include <iostream>
#include "stack.h"
using namespace std ;
stack<int> bable_sort(stack<int>& s, int size){
    stack<int> no_sorted ,sorted ;
    int x,y ;
    for (int i = 0; i < size; i++)
    {
        x = s.pop() ;
        for (int j = i + 1 ; j < size ; j++){
                y = s.pop();
            if ( x <= y)
            {
                no_sorted.push(y) ;
            }else{
                no_sorted.push(x) ;
                x = y ;
            }
        }
        sorted.push(x) ;
        s = no_sorted ;
    }
    return sorted ; 
}

int main()
{
    int size;
    cout << "enter the size " << endl;
    cin >> size;
    stack<int> l = input<int>(size);
    l = bable_sort(l, size) ;
    output(l);
    return 0;
}