#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int MajorityElement(vector<int> nums) {
    int n = nums.size();

    int freq=0, ans=0;

    for (int i = 0; i < n; i++) {
        if(freq ==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1,2,2};
    int val = MajorityElement(nums);
    cout << val << endl;
    return 0;
}