class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int totalSum=0;

        for(int i:nums)
          totalSum+=i;

        int reqSum=(n*(n+1))/2;
        return reqSum-totalSum;  
    }
};