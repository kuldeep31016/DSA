#include <iostream>
using namespace std;

// Check if it is possible to paint boards within maxTime
bool isPossible(vector<int> &boards, int n, int k, int maxTime) {
    int painter = 1;
    int currSum = 0;

    for (int i = 0; i < n; i++) {
        // If a single board is bigger than maxTime → impossible
        if (boards[i] > maxTime)
            return false;

        if (currSum + boards[i] <= maxTime) {
            currSum += boards[i];
        } else {
            painter++;
            currSum = boards[i];

            if (painter > k)
                return false;
        }
    }
    return true;
}

// Main function to find minimum maximum time
int findLargestMinDistance(vector<int> &boards, int k) {
    int n = boards.size();

    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += boards[i];
        maxi = max(maxi, boards[i]);
    }

    int start = maxi;
    int end = sum;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(boards, n, k, mid)) {
            ans = mid;
            end = mid - 1;  // try smaller
        } else {
            start = mid + 1; // increase
        }
    }

    return ans;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;

    int result = findLargestMinDistance(boards, k);

    cout << "Minimum maximum time: " << result << endl;

    return 0;
}