#include <iostream>
#include <vector>
using namespace std ;
int partition (vector<int> &arr,int left ,int right){
    int pivot = arr[right] ;
    int i = left - 1 ;
    for (int j = left; j < right ; j++)
    {
        if (arr[j] <= pivot)
        {
            i++ ;
            swap(arr[i], arr[j]) ;
        }
    }
    i++ ;
    swap(arr[i], arr[right]) ;
    return i ;
}
void quickSort(vector<int> &arr, int left, int right){
    if(left >= right ) return ; {}
    int s =  partition (arr, left, right) ;
    quickSort(arr, left, s-1) ;
    quickSort(arr, s+1, right) ;
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
    quickSort(arr , 0, size-1) ;
    output(arr , size) ;
    return 0 ;
}