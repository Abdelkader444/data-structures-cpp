#include <iostream>
#include "queque.h"
using namespace std ;
que<int> merg(que<int> s1, que<int> s2){
    que<int> q ;
    while (!s1.empty() && !s2.empty())
    {
        if (s1.top() < s2.top())
        {
            q.enque(s1.deque()) ;
        }else{
            q.enque(s2.deque()) ;
        }
    }
    while (!s1.empty())
    {
        q.enque(s1.deque()) ;
    }
    while (!s2.empty())
    {
        q.enque(s2.deque()) ;
    }
    return q ;
}
void merg_sort(que<int>& q,int size){
    if(size <= 1 ) return ; {}
    int mid = size/2 ;
    que<int> q1, q2 ;
    for(int i = 0 ; i < mid ; i++){
        q1.enque(q.deque()) ;
    }
    merg_sort(q1, mid);
    int n = 0 ;
    while(!q.empty()){
        q2.enque(q.deque()) ;
        n++ ;
    }
    merg_sort(q2, n);
    q = merg(q1, q2);
}
int main(){
    int size;
    cout << "enter the size of que" <<endl ;
    cin >> size ;
    que<int> q = input<int> (size) ;
    merg_sort(q, size) ;
    output(q);
    return 0 ;
}
