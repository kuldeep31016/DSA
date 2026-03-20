#include <iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    // count
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }

    // fill 0s
    for(int i = 0; i < count0; i++) {
        arr[i] = 0;
    }

    // fill 1s
    for(int i = count0; i < count0 + count1; i++) {
        arr[i] = 1;
    }

    // fill 2s
    for(int i = count0 + count1; i < n; i++) {
        arr[i] = 2;
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = 6;

    sort012(arr, n);

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}