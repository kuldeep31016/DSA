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

    int arr[]={5,2,9,4,7,6,1,0};
    SwapAlternate(arr,8);
    return 0;
}