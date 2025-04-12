class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            /*for(int i=0; i<nums.size(); i++)
            {
                for(int j=i+1; j<nums.size(); j++)
                {
                    if(nums[i]+nums[j] == target)
                    {
                        return {i,j};
                    }
                }
            }
            return {};*/
    
            int n = nums.size();
            map<int, int> mp;
    
            for(int i=0; i<n; i++)
            {
                int remaining = target - nums[i];
    
                if(mp.find(remaining) != mp.end())
                {
                    return {mp[remaining], i};
                }
    
                mp[nums[i]] = i;
            }
    
            return {};
        }
    };

// Time complexity O(n)
