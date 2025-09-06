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
int main(){
    int size1,size2 ;
    cout << "enter the size of first que" <<endl ;
    cin >> size1 ;
    que q1 = input<int> (size1) ;
    cout << "enter the size of seqund que" <<endl ;
    cin >> size2 ;
    que q2 = input<int> (size2) ;
    que q = merg(q1, q2) ;
    output(q);
    return 0 ;
}
