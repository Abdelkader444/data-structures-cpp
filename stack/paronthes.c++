#include <iostream>
#include "stack.h"
using namespace std;
bool paronthes(char t[]){
    stack<char> l ;
    int i = 0 ;
    while(t[i] != '\0'){
            if (t[i] == '(' || t[i] == '{' || t[i] == '['){
            l.push(t[i]) ;
            }else if(t[i] == ')' && !l.empty() && l.top() == '('){
                l.pop();
            }else if(t[i] == '}' && !l.empty() && l.top() == '{'){
                l.pop();
            }else if(t[i] == ']' && !l.empty() && l.top() == '['){
                l.pop();
            }else{
                return false ;
            }
            i++ ;
        }
        return l.empty() ;
    }
    int main()
{
    int size;
    cout << "enter the size " << endl;
    cin >> size;
    char t[size];
    cout << "enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> t[i] ;
    }
    t[size] = '\0' ;
    bool p = paronthes(t);
    if (p){
        cout << "well paronthesized" << endl;
    }else{
        cout << "bad correct" << endl ;
    }
    return 0;
}

    

