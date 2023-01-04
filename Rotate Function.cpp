class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
      
       int sum=0;
       for(auto x:nums)
       {
           sum+=x;
       }
       int n =nums.size();
       int sum1=0;
       for(int i=0;i<n;i++)
       {
           sum1+=i*nums[i];
       } 
       int sol=sum1;
       for(int pivot=n-1;pivot>=0;pivot--)
       {
           sum1+=sum-nums.size()*nums[pivot];
           sol=max(sum1,sol);
       }
       return sol;
    }
};
