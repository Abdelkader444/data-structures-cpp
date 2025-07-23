#include <iostream>
#include "queque.h"
using namespace std ;
bool sub_que(que<int>& main, que<int>& small){
    while(!main.empty()){
        que<int> t_main = main ;
        que<int> t_small = small ;
        bool sub = true ;
        while (!t_small.empty()){
            if(t_main.empty() || t_main.top() != t_small.top()){
                sub = false ;
                break;
            }else{
                t_main.deque() ;
                t_small.deque();
            } 
        }
        if(sub){
            return true ;
        }
        main.deque();
    }
    return false ;
}
int main(){
    int size, size2 ;
    cout << "enter the size of main que " << endl ;
    cin >> size ;
    que<int> q = input<int>(size) ;
    cout << "enter the size of small que " << endl ;
    cin >> size2 ;
    que<int> q2 = input<int>(size2) ;
    if (size >= size2){
    bool s = sub_que(q, q2);
    if (s){
        cout << "yes ,it`s sub que" <<endl ;
    }else{
        cout << "No ,it`s not sub que" <<endl ;
    }
    }else{
        cout << "error" << endl ;
    }
    return 0 ;
}