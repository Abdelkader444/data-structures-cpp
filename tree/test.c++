#include <iostream>
#include<math.h>
using namespace std ;
struct point {
    float x , y ;
};
float distance(point a, point b){
    float dx = a.x - b.x , dy = a.y - b.y ;
    return sqrt(dx*dx + dy*dy) ;
}
int main(){
    point a = {1, 2} ;
    point b = {3, 4} ;
    float c = distance(a ,b); 
    cout << c <<endl;
    return 0 ;
}