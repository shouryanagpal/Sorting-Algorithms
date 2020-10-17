#include<bits/stdc++.h>
using namespace std;

#define Size(a) (sizeof(a)/sizeof(a[0]))

void countingSort(int arr[] , int n){
    int m = *max_element(arr,arr+n);
    int index[m+1]={0};
    for(int i=0 ; i<n ;i++){
        index[arr[i]]++;
    }
    int C[n] , k=0;
    for(int i=0 ;i<m+1;i++){
        if(index[i]>0){
            while((index[i]--)>0){
                C[k++] = i;
            }
        }
    }
    cout<<"Sorted array :";
    for(int i=0 ;i<n;i++){
        cout<<C[i]<<" " ;
    }
    
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,11,2,3} ;
    int m = *max_element(arr,arr+10);
    cout<<m;
    cout<<Size(arr)<<"\n" ;

    countingSort(arr,Size(arr));

}