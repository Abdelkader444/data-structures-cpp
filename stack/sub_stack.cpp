#include <iostream>
#include "stack.h"
using namespace std;
bool sub_stack(stack<int> l, stack<int> l1) {
    while (!l.empty()) {
        stack<int> t_l = l;
        stack<int> t_l1 = l1;
        bool match = true;
        
        while (!t_l1.empty()) {
            if (t_l.empty() || t_l.top() != t_l1.top()) {
                match = false;
                break;
            }
            t_l.pop();
            t_l1.pop();
        }
        
        if (match) {
            return true;
        }
        
        l.pop();
    }
    return false;
}
int main()
{
    int size,size1;
    cout << "enter the size of bigh stack " << endl;
    cin >> size;
    stack<int> s = input<int>(size);
    cout << "enter the size of small stack " << endl;
    cin >> size1;
    stack<int> s1 = input<int>(size1);
    if(size >= size1){
        bool sub = sub_stack(s,s1) ;
        if (sub){
            cout << "yes ,it`s sub stack" <<endl ;
        }else{
            cout << "No ,it`s not sub stack" <<endl ;
        }
    }else{
        cout << "error" << endl ;
    }
    return 0;
}
