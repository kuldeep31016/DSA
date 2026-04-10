#include <iostream>
using namespace std;

int mySqrt(int x) {
    int low = 0;
    int high = x;
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid == x) {
            return mid;
        }
        else if (mid * mid < x) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

double PreciseSqrt(int x, int ans, int precision) {

    double tempAns = ans;
    double factor = 1;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        for (double j = tempAns; j * j < x; j += factor) {
            tempAns = j;
        }
    }

    return tempAns;
}

int main() {
    int x = 37;

    int result = mySqrt(x);
    cout << "Square root (floor): " << result << endl;

    double finalAns = PreciseSqrt(x, result, 3);
    cout << "Square root with decimals: " << finalAns << endl;

    return 0;
}