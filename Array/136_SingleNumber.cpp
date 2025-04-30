class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int xor_res = 0;
    
            for(int i=0; i<nums.size(); i++)
            {
                xor_res ^= nums[i];
            }
            return xor_res;
        }
    };