#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int maximum=nums[0];
        int curmax=nums[0];
        for(int i=1;i<nums.size();i++){
            curmax=max(nums[i],nums[i]+curmax);
            maximum=max(maximum,curmax);
            
        }
        return maximum;

    }

int main() {

    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    cout << maxSubArray(nums);

    return 0;
}