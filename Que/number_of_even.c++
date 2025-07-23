#include <iostream>
#include "queque.h"
using namespace std ;
int num_even(que<int> q){
    int n = 0 ;
    while(!q.empty()){
        if (q.top()%2 == 0 ){
            n++;
        }
        q.deque();
    }
    return n ;
}
int main(){
    int size ;
    cout << "enter the size " << endl ;
    cin >> size ;
    que<int> l ;
    l = input<int>(size) ;
    int n = num_even(l) ;
    cout << "the number of even = " << n << endl ;
    return 0 ;
}