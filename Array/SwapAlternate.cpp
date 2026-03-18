#include<iostream>
#include<algorithm>
using namespace std;

void SwapAlternate(int arr[], int size){

   int low=0;
   int high=size-1;
  
   while(low<high){
    swap(arr[low],arr[low+1]);
    low=low+2;
   }
   cout<<"Array after Alternate Reverse : ";

   for(int i=0; i<size;i++){
       cout<<arr[i]<<" ";
   }
}

int main(){

    int arr[]={2,3,4,5,6};
    SwapAlternate(arr,5);
    return 0;
}