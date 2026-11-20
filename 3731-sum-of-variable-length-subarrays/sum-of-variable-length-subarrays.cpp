class Solution {
public:
    int subarraySum(vector<int>& nums) {
       int n = nums.size();

       vector<int> v;
        for(int i=0;i<n;i++){
            int start = max(0,i-nums[i]);
            int sum =0;
            for(int j=start;j<=i;j++){
                sum = nums[j]+sum;
            }
            v.push_back(sum);
        }
        int finalsum=0;
        for(int i=0;i<v.size();i++){
              finalsum = finalsum + v[i];
        }
        return finalsum;
    }
};