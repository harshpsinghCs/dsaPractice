class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
          return 0;
        int k=1;
        int j=1;
        int temp=nums[0];

        for(int i=1; i<n; i++)
        {
            if(nums[i]!=temp)
            {
                nums[j]=nums[i];
                j++;
                k++;
                temp=nums[i];
            }
        }
        return k;
    }
};