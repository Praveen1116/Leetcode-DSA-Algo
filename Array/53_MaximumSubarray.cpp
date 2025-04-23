class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            /*int res = nums[0];
            int total = 0;
    
            for(int n : nums)
            {
                if(total < 0)
                {
                    total = 0;
                }
    
                total += n;
                res = max(res, total);
            }
            return res;*/
    
            // Kadane's algorithm
    
            int max_sum = INT_MIN, current_sum = 0;
    
            for(int i=0; i<nums.size(); i++)
            {
                current_sum += nums[i];
    
                if(current_sum > max_sum)
                {
                    max_sum = current_sum;
                }
    
                if(current_sum < 0)
                {
                    current_sum = 0;
                }
            }
            return max_sum;
        }
    };