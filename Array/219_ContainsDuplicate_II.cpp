class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int n = nums.size();
        // for(int i=0; i<n; i++)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //         if((nums[i] == nums[j]) && (abs(i-j)<=k))
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;

        unordered_map<int, int> seen;

        for(int i=0; i<nums.size(); i++)
        {
            int val = nums[i];
            if(seen.find(val) != seen.end() && i-seen[val] <= k)
            return true;

            seen[val] = i;
        }
        return false;
    }
};