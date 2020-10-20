#include<bits/stdc++.h>
using namespace std ;
int main(){
  // STL sort in CPP 
  // uses Quick Sort 
  int arr[10] = {10,9,8,7,6,5,4,3,2,1} ;
  sort(arr,arr+10);
 
  cout<<"Sorted Array" ;
 
  for(int i=0 ;i<10 ;i++){
      cout<<arr[i]<<" " ;
    }
}
