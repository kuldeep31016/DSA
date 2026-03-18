#include<iostream>
#include <climits>

using namespace std;
int main(){

    int max=INT_MIN;
    int min=INT_MAX;
    
    int arr[5]={12,3,5,-4,32};

    for(int i =0;i<5;i++){
        if(arr[i]>max)
         max=arr[i];
    }
     for(int i =0;i<5;i++){
        if(arr[i]<min)
         min=arr[i];
    }
    cout<<"The Maximum in array is : "<<max;
    cout<<endl;
    cout<<"The Minimum in array is : "<<min;
    
    return 0;
}