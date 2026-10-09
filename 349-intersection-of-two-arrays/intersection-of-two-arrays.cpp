class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> map(nums1.begin(),nums1.end());

        vector<int> result;
        int n=nums2.size();
        
        for(int i=0; i<n; i++)
        {
            auto it = map.find(nums2[i]);
            if(it!=map.end())
            {
                result.push_back(*it);
                map.erase(*it);
            }
        }
        return result;
    }
};