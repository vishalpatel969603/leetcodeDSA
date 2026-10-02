class Solution {
public:
    int thirdMax(vector<int>& nums) {
      int n=nums.size();
      long long firstmx = -1e18;
      for(int i=0;i<n;i++){
          firstmx= max(firstmx ,(long long) nums[i]);
      }  
     long long Secondmx = -1e18;
      for(int i=0;i<n;i++){
          if(firstmx > nums[i]){
            Secondmx = max(Secondmx,(long long) nums[i]);
          }
      } 
      long long thirdmx = -1e18;
      for(int i=0;i<n;i++){
        if( Secondmx > nums[i]){
            thirdmx = max( thirdmx,(long long) nums[i]);
        }
      }
      for(int i=0;i<n;i++){
        if(thirdmx == nums[i]) return thirdmx;
      }
      return firstmx;
     
    }
};