#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortArray(vector<int> & nums){
    sort(nums.begin(),nums.end());
}
int main(){
    vector <int> nums = {0, 0, 1, 1, 2, 0, 1, 2,2,0,1};
    sortArray(nums);                    // Sort in place
    
    // Print the sorted vector
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}