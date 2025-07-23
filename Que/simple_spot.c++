#include <iostream>
#include "queque.h"
using namespace std ;
que<int> simple_sort(que<int>& q) {
    que<int> l;
    int x;
    bool sorted = true;

    while (!q.empty()) {
        x = q.deque();
        if (!q.empty()) {
            int y = q.top();  
            if (x <= y) {
                l.enque(x);
            } else {
                sorted = false;
                l.enque(y);     
                q.deque();     
                q.enque(x);    
            }
        } else {
            l.enque(x); 
        }
    }

    if (!sorted) {
        return simple_sort(l); 
    }
    return l; 
}

int main(){
    int size ;
    cout << "enter the size " << endl ;
    cin >> size ;
    que<int> l = input(size) ;
    l = simple_sort(l) ;
    output(l) ;
    return 0 ;
}