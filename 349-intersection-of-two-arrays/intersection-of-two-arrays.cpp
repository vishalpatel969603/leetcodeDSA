class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     int n=nums1.size();
     int m=nums2.size();
     sort(nums1.begin(),nums1.end());
     sort(nums2.begin(),nums2.end());
     vector<int> ans;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums1[i]==nums2[j]){
                if(ans.empty() || ans.back()!=nums1[i]){
                    ans.push_back(nums1[i]); 
                     
                }
            }
   
        }
     }
          return ans;
    }
};