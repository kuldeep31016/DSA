#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main() {

    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 5};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> result = findArrayIntersection(arr1, n, arr2, m);

    cout << "Intersection: ";

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}