#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
   
    int index = 0;
    int high = size - 1;

    while(index < high){
        // swap
        //we can perform swap uisng the swap() inbuilt in c++

        int temp = arr[index];
        arr[index] = arr[high];
        arr[high] = temp;

        index++;
        high--;
    }

    cout << "Reversed Array: ";

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[5] = {7,6,5,4,3};

    reverseArray(arr, 5);

    return 0;
}