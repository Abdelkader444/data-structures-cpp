#include <iostream>
const int min0 = 4 ;
using namespace std ;
void insertionSort(int arr[], int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void merg(int arr[], int start,int mid, int end){
    int s1 = mid - start + 1 ;
    int s2 = end - mid ;
    int left[s1] ;
    int right[s2] ;
    for (int i = 0; i < s1; i++)
    {
        left[i] = arr[start + i] ;
    }
    for (int i = 0; i < s2; i++)
    {
        right[i] = arr[mid + 1 + i] ;
    }
    int i = 0 , j = 0 ,k = 0 ;
    while (i < s1 && j < s2)
    {
        if(left[i] <= right[j]){
            arr[start + k ] = left[i] ;
            i++ ;
        }else{
            arr[start + k ] = right[j];
            j++ ;
        }
        k++ ;
    }
    while (i < s1)
    {
        arr[start + k] = left[i];
        i++ ;
        k++ ;
    }
    while (j < s2)
    {
        arr[start + k] = right[j];
        j++ ;
        k++ ;
    }
}
void timsort(int arr[], int size){
    for (int i = 0; i < size; i+=min0)
    {
        insertionSort(arr, i, min(size-1, min0+i-1)) ;
    }
    for (int i = min0 ; i < size; i = 2*i)
    {
        for (int left = 0; left < size; left += (2*i))
        {
            int mid = min(left + i - 1, size - 1) ;
            int right = min( size - 1 , left + (2*i) - 1) ;
            if (mid < right)
            {
                merg( arr, left, mid, right ) ;
            }
        }
    }
}
void output(int arr[],int size){
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
    int arr[size]  ;
    cout << "enter the elements" ;
    for (int i = 0; i < size ; i++)
    {
        cin >> arr[i] ;
    }
    
    timsort(arr ,size);
    output(arr, size);
    return 0 ;
}