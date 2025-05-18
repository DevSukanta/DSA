#include <iostream>
#include <vector>
using namespace std;

int peakSearch(vector<int> & nums)
{
    int n = nums.size();
    for(int i = 1; i < n - 1; i++){
        if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
            return nums[i];
        }
    }
    return 0; // Return 0 if no peak is found
}

int main()
{
    vector<int> nums={3,4,5,6,7,0,1,2};
    cout << peakSearch(nums) << endl;
    return 0;
}
