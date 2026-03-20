#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    
    int n = nums.size();
    vector<int> result;

    for(int i = 0; i < n; i++) {

        int num = abs(nums[i]);   // get original value
        int idx = num - 1;        // convert to index

        if(nums[idx] < 0) {
            result.push_back(num);   // duplicate found
        } 
        else {
            nums[idx] = -nums[idx];  // mark visited
        }
    }

    return result;
}

int main() {

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans = findDuplicates(nums);

    cout << "Duplicates are: ";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}