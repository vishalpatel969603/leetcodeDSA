class Solution {
public:
    int maximumDifference(vector<int>& nums) {
         int n=nums.size();
       int mx=0;
       int j=0;
      for(int i=1;i<n;i++){
          if(nums[j] > nums[i]) nums[j] = nums[i];
         else if(nums[i]-nums[j] > mx) mx = nums[i]-nums[j];
      }
      if(mx==0) return -1;
          return mx; 
    }
};