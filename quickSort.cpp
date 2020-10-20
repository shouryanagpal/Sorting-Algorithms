
#include<bits/stdc++.h>
using namespace std;
void quickSort(int arr[] ,int l, int r){
    if(r-l<=1){
        return ;
    }
    // Code for partioning . 
    int pivot = arr[l] ;
    int lessThan = l+1 ;
    for(int moreThan = l+1 ; moreThan<r ; moreThan++){
        if(arr[moreThan] <= pivot){
            swap(arr[moreThan],arr[lessThan]) ;
            lessThan++;
        }
    }
    swap(arr[l],arr[lessThan-1]);
    // Code for quick sort 
    quickSort(arr,l,lessThan) ;
    quickSort(arr,lessThan,r);
}
int main(){
    // Quick SORT
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    quickSort(arr,0,10) ;
    cout<<"sorted array : ";
    for(int i=0 ; i<10 ;i++){
        cout<<arr[i]<<" ";
    }
}