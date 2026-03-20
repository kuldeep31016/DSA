#include <iostream>
using namespace std;

int mySqrt(int x) {
    int low = 0;
    int high = x;
    int ans = 0;

    while (low <= high) {
        // Use long long to prevent overflow
        long long mid = low + (high - low) / 2;

        if (mid * mid == x) {
            return mid;
        }
        else if (mid * mid < x) {
            ans = mid;        // store possible answer
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans; // floor value
}

int main() {
    int x = 17;

    int result = mySqrt(x);

    cout << "Square root (floor): " << result << endl;

    return 0;
}