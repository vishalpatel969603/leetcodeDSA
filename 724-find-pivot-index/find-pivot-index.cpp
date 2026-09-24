class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int leftsum = 0;
          for(int i=0;i<n;i++){
            leftsum += nums[i]; 
          }
           int j=0;
           int rightsum = 0;
           for(int i=0;i<n;i++){
               leftsum -= nums[j];
               if(leftsum==rightsum) return j;
               rightsum +=nums[j++];
           }
           return -1;
    }
};