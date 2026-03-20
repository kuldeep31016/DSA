#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        totalSum += nums[i];
    }

    int leftSum = 0;

    // Step 2: Find pivot index
    for(int i = 0; i < n; i++){
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum){
            return i;
        }

        leftSum += nums[i]; // update AFTER check so that the current element will not iclude in the leftsum
    }

    return -1;
}

int main() {
    
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int result = pivotIndex(nums);

    cout << "Pivot Index: " << result << endl;

    return 0;
}