class Solution {
public:
   void revrese(vector<int>& nums,int l,int m){
    while(l<=m){
        int temp=nums[l];
        nums[l]=nums[m];
        nums[m]=temp;
        l++;
        m--;
    }
   }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            k=k%n;
        }
      revrese(nums,0,n-1);
       revrese(nums,0,k-1);
        revrese(nums,k,n-1);
    }
};