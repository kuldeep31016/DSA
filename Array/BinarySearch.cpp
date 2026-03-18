#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int low = 0;
    int high = size - 1;
   
    while(low <= high){
        int mid = low + (high - low) / 2;
        
        if(arr[mid] < key){
            low = mid + 1;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }

    return -1; // not found
}

int main(){

    int arr[10] = {2, 5, 6, 8, 9, 12, 23, 45, 76, 93};
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = BinarySearch(arr, 10, key);

    if(index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}