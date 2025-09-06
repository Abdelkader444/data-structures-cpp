#include <iostream>
#include <vector>
using namespace std ;
int getMax(vector<int> arr ,int size){
int x = arr[0] ;
for (int i = 1; i < size; i++)
{
    if(arr[i] > x){
        x = arr[i] ;
    }
}
    return x ;
}

vector<int> countingSort( vector<int> &arr ,int size){
    int x = getMax(arr, size) + 1  ;
    vector<int> ar(x, 0) ;
   for (int i = 0; i < size; i++)
   {
    ar[arr[i]]++ ;
   }
   for (int i = 1; i < x; i++)
   {
        ar[i] += ar[i-1] ;
   }
   vector<int> ar2(size) ;
   for (int i = size - 1; i >= 0; i--){
        int k = arr[i];
        ar[k]--;                 
        int j = ar[k];           
        ar2[j] = k;              
    }
   return ar2 ;
}
void output(vector<int> &arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;  
}
int main(){
    int size ;
    cout << "enter the size" << endl; 
    cin >> size ;
    vector<int> arr(size) ;
    cout << "enter the elements " << endl ;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    arr = countingSort(arr , size) ;
    output(arr , size) ;
    return 0 ;
}