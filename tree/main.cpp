#include <iostream>
using namespace std;
struct node{
    int val ;
    node* left ;
    node* right;
};
node* inpute(int val){
    node* l = new node();
    l->val = val ;
    l->left = nullptr ;
    l->right = nullptr ;
    return l ;
}
void output(node* l){
    if(l == nullptr) return ;
    output(l->left) ;
    output(l->right);
    cout << l->val << " " ;
}
int main(){
    node* l = inpute(1); 
    l->left = inpute(2);
    l->left->left = inpute(3);
    l->left->right = inpute(4) ;
    l->right = inpute(5);
    l->right->left = inpute(6);
    l->right->right = inpute(7) ;
    output(l) ;
    return 0 ;
}