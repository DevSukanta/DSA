#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortArray(vector<int> & nums){
    int n=nums.size();
    int low =0, mid=0, high=n-1;
    while(mid <= high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
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