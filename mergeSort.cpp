#include<bits/stdc++.h>
using namespace std;
#define  Size(A) (sizeof(A)/sizeof(A[0]))

void merge(int arr[] , int l ,int  m , int r){
    int n1 = m-l+1 ;
    int n2 = r-m ;
    int A[n1] , B[n2] ;
    for(int i=0 ; i<n1 ;i++){
        A[i] = arr[i+l];
    }
    for(int i=0 ; i<n2 ;i++){
        B[i] = arr[m+i+1];
    }
    int i , j;
    i=j=0 ;
    int k=l;
    while(i+j < n1+n2){
        if(i==n1)
            arr[k++] = B[j++] ; 
        else if(j==n2)
            arr[k++] = A[i++]  ;
        else if(A[i] < B[j]) 
            arr[k++]  = A[i++] ;
        else 
            arr[k++] = B[j++] ;
    }

}
void  mergeSort(int arr[], int l ,int r ){
    if (l < r){
        int m = (r+l)/2  ;
        mergeSort(arr,l,m) ;
        mergeSort(arr,m+1,r);

        merge(arr,l,m,r) ;
    } 
}

int main(){
    // Merge SORT 
    int arr[] ={2,4,6,8,10,1,3,5,7,9,1,1,2,2,3,3};
    mergeSort(arr,0,Size(arr)-1);
    cout<<"sorted array : ";
    for(int i=0 ; i<Size(arr) ;i++){ 
        cout<<arr[i]<<" ";
    }
}