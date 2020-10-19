
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr , int n){
    for(int p=0 ; p<n-1 ;p++){
        for(int s=0 ; s<n-p-1 ;s++){
            if(arr[s] > arr[s+1]){
                swap(arr[s],arr[s+1]);
            }
        }
    }
}
int main(){
    // Bubble SORT
    // Time Complexity :
    // worst  : Big-O(n^2)
    // best   : Theita(n^2)
    // average: Omega(n)

    // In Place - Yes
    // Stable   - Yes
    // Space Complexity :1
    // Comparison Sort
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    bubbleSort(arr,10) ;
    cout<<"sorted array : ";
    for(int i=0 ; i<10 ;i++){
        cout<<arr[i]<<" ";
    }
}