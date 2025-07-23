#include <iostream>
#include "queque.h"
using namespace std ;
que<int> repleaces(que<int> q, int x, int y){
    que<int> s ;
    int n ;
    while(!q.empty()){
        n = q.deque() ;
        if (n == x ){
          s.enque(y) ;  
        }else{
            s.enque(n) ;
        }
    }
    return s ;
}
int main(){
    int size, x, y ;
    cout << "enter the size " << endl ;
    cin >> size ;
    que<int> l ;
    l = input<int>(size) ;
    cout << "enter X" << endl ;
    cin >> x ;
    cout << "enter Y" << endl ;
    cin >> y ;
    l = repleaces(l, x, y) ;
    output(l) ;
    return 0 ;
}