#include<iostream>
#include<vector>
using namespace std ;
void merge(vector<int> &arr,int start,int mid ,int end){
    int n1 = mid - start + 1 ;
    int n2 = end - mid ;
    vector<int> left(n1) ;
    vector<int> right(n2) ;
    for (int i = 0 ; i < n1 ; i++)
    {
        left[i] = arr[start+i] ;
    }
    for (int i = 0 ; i < n2 ; i++)
    {
        right[i] = arr[mid+1+i] ;
    }
    int i = 0 , j = 0 ,k = start;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j]){
         arr[k++] = left[i++] ;
        }else{
         arr[k++] = right[j++] ;   
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++] ;
    }
    while (j < n2)
    {
        arr[k++] = right[j++]  ;
    }
}
void merge_sort(vector<int> &arr,int start, int end){
    if ( start >= end) return ; {}
    int mid = (start+end)/2 ;
    merge_sort(arr , start, mid) ;
    merge_sort(arr , mid+1, end) ;
    merge(arr, start, mid, end) ;
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
    cout << "enter the size " << endl ;
    cin >> size ;
    vector<int> arr(size)  ;
    cout << "enter the elements" << endl ;
    for (int i = 0; i < size ; i++)
    {
        cin >> arr[i] ;
    }
    
    merge_sort(arr , 0, size-1);
    output(arr, size);
    return 0 ;
}