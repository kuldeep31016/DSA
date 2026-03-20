#include <iostream>
using namespace std;

// function to sort 0s and 1s
void sortZeroOne(int arr[], int n) {

    int left = 0;
    int right = n - 1;

    while(left < right) {

        // move left pointer until we find 1
        while(arr[left] == 0 && left < right) {
            left++;
        }

        // move right pointer until we find 0
        while(arr[right] == 1 && left < right) {
            right--;
        }

        // swap if needed
        if(left < right && arr[left]==1 && arr[right]==0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

// function to print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {1, 1, 0, 0, 0, 1, 0};
    int n = 7;

    cout << "Before sorting: ";
    printArray(arr, n);

    sortZeroOne(arr, n);

    cout << "After sorting: ";
    printArray(arr, n);

    return 0;
}