#include <iostream>
using namespace std ;
void marg(int arr[], int start,int mid ,int end){
    int n1 = mid - start + 1;
    int n2 = end - mid ;
    int left[n1];
    int right[n2] ;
    for (int i = 0; i < n1 ; i++)
    {
        left[i] = arr[start + i ] ;  
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + i + 1] ;
    }
    int k = 0 ;
    int i = 0 ;
    int j = 0 ;
    while (i < n1 && j < n2)
    {
       if (left[i] < right[j])
       {
        arr[start + k] = left[i] ;
        i++ ;
        k++ ;
       }else{
        arr[start + k] = right[j] ; 
        j++ ;
        k++ ;
       }
    }
    while (i < n1)
    {
       arr[start + k ] = left[i] ;
        i++ ;
        k++ ;
    }
    while (j < n2)
    {
       arr[start + k ] = right[j] ;
        j++ ; 
        k++ ;
    }
}

void merg_sort(int arr[], int start,int end){
    if (start < end){
        int mid = (start + end )/2 ;
        merg_sort(arr,start,mid);
        merg_sort(arr,mid+1,end);
        marg(arr, start, mid, end);
    }
}
void output(int t[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << t[i] << " " ;
    }
    cout << endl ;  
}

int main(){
    int size ;
    cout << "enter the size " << endl ;
    cin >> size ;
    int t[size]  ;
    merg_sort(t ,0 ,size-1);
    output(t, size);
    return 0 ;
}