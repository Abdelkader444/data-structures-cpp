#include <iostream>
#include <vector>
using namespace std ;
void insertion_sort(vector<int>& arr, int size){
    int temp ;
    int j ;
    for (int i = 1 ; i < size ; i++)
    {
        temp = arr[i] ;
        j = i - 1 ;
        while (j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = temp ;
    }
}
int main(){
    int size ;
    cout << " enter the size " << endl ; 
    cin >> size ;
    vector<int> arr(size) ;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    insertion_sort( arr , size) ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    return 0 ;
}
