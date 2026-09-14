class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        int m =nums.size();
        int i=0,j=n;
        while(i<n && j<m){
             v.push_back(nums[i]);
             v.push_back(nums[j]);
             i++;
             j++;
        }
           return v;
    }
};