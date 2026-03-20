#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;

    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main() {
    int arr[] = {2, 3, 5, 2, 3};
    int size = 5;

    cout << "Unique element: " << findUnique(arr, 5);

    return 0;
}