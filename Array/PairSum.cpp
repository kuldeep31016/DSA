#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> pairSum(vector<int> &arr, int s) {

    // vector<vector<int>> → because we store multiple pairs
    // each pair itself is a vector of 2 elements → {a, b}
    vector<vector<int>> ans;

    for(int i = 0; i < arr.size() - 1; i++) {

        for(int j = i + 1; j < arr.size(); j++) {

            if(arr[i] + arr[j] == s) {

         
                vector<int> temp;

                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));

    
                ans.push_back(temp);
            }
        }
    }
    // Sorting is required by Coding Ninjas:
    // - sort pairs in increasing order
    // - if first element same, smaller second comes first
    sort(ans.begin(), ans.end());

    return ans;
}

int main() {

  
    vector<int> arr = {1, 2, 3, 4, 5};

    int s = 5; 

    vector<vector<int>> result = pairSum(arr, s);

    cout << "Pairs are:\n";

    for(int i = 0; i < result.size(); i++) {
       cout << result[i][0] << " " << result[i][1] << endl;
    }

    return 0;
}