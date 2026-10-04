class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
         set<int> st;
          for(auto ele : nums){
          st.insert(ele);
          }
          if(n==st.size()) return false;
          else return true;

    }
};