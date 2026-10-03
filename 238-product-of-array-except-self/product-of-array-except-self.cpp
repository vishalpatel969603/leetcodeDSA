class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int count =0;
        int idx=-1;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]==0) {
                count++;
                idx=i;
                continue;
            }
            p*=nums[i];
        }
        if(count>=2) return v;
        if(count==1){
            v[idx]=p;
            return v;
        }
       
      for(int i=0;i<n;i++){
         v[i]=p/nums[i];
      }
      return v;
    }
};