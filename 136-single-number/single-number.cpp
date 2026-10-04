class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        // nums[i] == x
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second == 1)  return x.first;

        }
        return 3;
    }
};