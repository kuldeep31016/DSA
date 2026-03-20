#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {

    int freq[2001] = {0};   // count of each number
    int used[1001] = {0};   // to check duplicate frequencies

    // Step 1: count frequency
    for(int i = 0; i < arr.size(); i++) {
        freq[arr[i] + 1000]++;
    }

    // Step 2: check if any frequency repeats
    for(int i = 0; i < 2001; i++) {

        if(freq[i] > 0) {

            if(used[freq[i]] == 1) {
                return false;   // same frequency already seen
            }

            used[freq[i]] = 1;
        }
    }

    return true;
}

int main() {
    vector<int> arr = {1,2,2,1,1,3};

    if(uniqueOccurrences(arr)) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}