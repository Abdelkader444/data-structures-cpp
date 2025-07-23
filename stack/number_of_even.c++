#include <iostream>
#include "stack.h"
using namespace std ;
int number_of_even(stack<int> l){
    int n = 0 ;
    while(!l.empty()){
        int x = l.top() ;
        if (x%2 == 0){
            n++ ;
        }
        l.pop() ;
    }
    return n ;
}
int main()
{
    int size ;
    cout << "enter the size of stack " << endl;
    cin >> size;
    stack<int> s = input<int>(size);
    int n = number_of_even(s) ;
    cout << "numer of even = " << n << endl ;
    return 0;
}