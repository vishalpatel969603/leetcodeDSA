class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag1 = true;
        bool flag2 = true;
          int n=nums.size();
        for (int i=1;i<n;i++) {
            if (nums[i]<nums[i-1]) {
                flag1 = false;
            }
            if (nums[i]>nums[i-1]) {
               flag2 = false;
            }
        }
        return flag1 || flag2;
    }
};