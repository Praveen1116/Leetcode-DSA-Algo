class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int k = 0;
            int n = nums.size();
            for(int i=0; i<n; i++)
            {
                // for(int j=n-1; j<n; j++)
                // {
                    if(val != nums[i])
                    {
                        nums[k++] = nums[i];
                    }
                //}
            }
            return k;
        }
    };