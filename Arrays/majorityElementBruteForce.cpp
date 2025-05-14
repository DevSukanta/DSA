#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int MajorityElement(vector<int> nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int val = MajorityElement(nums);
    cout << val << endl;
    return 0;
}