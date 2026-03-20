#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            ans = mid;        // store answer
            high = mid - 1;   // move left
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            ans = mid;        // store answer
            low = mid + 1;    // move right
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
   
    vector<int> nums = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;

    int first = firstOccurrence(nums, target);
    int last = lastOccurrence(nums, target);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    return 0;
}