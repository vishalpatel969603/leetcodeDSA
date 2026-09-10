class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
      int ans=0;
        int j=0;
        for(int i=0;i<n;i++){    
            int len=0;
            while(nums[j]>0){           
                nums[j]=nums[j]/10;
                   len++;
               }
            j++;
            if(len%2==0) ans++;   
        }
       
        return ans;   
    }
};