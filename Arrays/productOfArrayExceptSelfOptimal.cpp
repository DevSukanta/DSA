#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector <int>productExceptSelf(vector<int>& nums){
    int n = nums.size();
    vector<int>ans(n,1);
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1]*nums[i-1];
    }
    int suffix = 1;
    for(int i=n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i]*= suffix;
    }
    return ans;
}

int main()
{
    vector<int>nums = {1,2,3,4};
    vector<int> result = productExceptSelf(nums);
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}