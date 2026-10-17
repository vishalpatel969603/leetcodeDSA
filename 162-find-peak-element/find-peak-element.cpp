class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
               mx = max(mx,nums[i]);
               
        }
         for(int i=0;i<n;i++){
              if(mx == nums[i]) return i;
               
        }
        return 5;
        
    }
};