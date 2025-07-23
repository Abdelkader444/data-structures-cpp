#include <iostream>
#include "queque.h"
using namespace std ;
que<int> bable_sort(que<int>& q, int size) {
    que<int> l ;
    int x,y ;
    for (int i = 0; i < size; i++){
        x = q.deque() ;
        for (int j = i + 1 ; j < size; j++)
        {   
            y = q.deque() ;
            if ( x <= y){
                q.enque(y) ;
            }else{
                q.enque(x) ;
                x = y ;
            }
        }
        l.enque(x) ;
    }

    return l; 
}

int main(){
    int size ;
    cout << "enter the size " << endl ;
    cin >> size ;
    que<int> l = input(size) ;
    l = bable_sort(l, size) ;
    output(l) ;
    return 0 ;
}