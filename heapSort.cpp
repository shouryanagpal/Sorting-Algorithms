#include<bits/stdc++.h>
using namespace std;
#define Size(a) (sizeof(a)/sizeof(a[0]))

void heapSortInsertion(int arr[] , int n){
    for(int i=1 ;i<n ;i++){
            int k = (i-1)/2 ;
            while(arr[i] > arr[k]){
                int temp = arr[i] ;
                arr[i] = arr[k];
                arr[k] = temp ;
                i = k ;
                k = (i-1)/2 ;
            }
    }
}
void heapSortHeapify(int arr[] , int n , int i ){

    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 

    if (l < n && arr[l] > arr[largest]) 
        largest = l; 

    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
        heapSortHeapify(arr, n, largest); 
    } 
}
void heapsortDeletion(int arr[], int n){
    for(int i=n-1 ;i>=0 ;i--){
        swap(arr[0],arr[i]);
        heapSortHeapify(arr,i,0);
    }
}
int main(){
    int arr[10]={10,7,6,8,9,5,4,3,2,1} ;
    /* heapSortInsertion(arr,Size(arr));
    heapSortDeletion(arr,Size(arr)); */
    int n =Size(arr);
    for(int i=(n/2)+1 ;i>=0 ;i--)
        heapSortHeapify(arr,n,i);
    heapsortDeletion(arr,n);
    for(int i=0 ;i<Size(arr);i++)
        cout<<arr[i]<<" ";
}