#include<iostream>
#include<vector>
using namespace std ;
void quickSort(vector<int> &arr, int size){
    if(size <= 1) return ; {}
    int pivot = arr[size - 1] ;
    vector <int> ar1, ar2;
    int n1 = 0, n2 = 0 ;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < pivot){
            ar1.push_back(arr[i]) ;
            n1++ ;
        }else if(arr[i] > pivot){
            ar2.push_back(arr[i]) ;
            n2++;
        }
    }
    quickSort(ar1, n1) ;
    quickSort(ar2, n2) ;
    int i = 0 ;
for (int x : ar1) arr[i++] = x;
    arr[i++] = pivot;
    for (int x : ar2) arr[i++] = x;
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
    quickSort(arr , size) ;
    output(arr , size) ;
    return 0 ;
}