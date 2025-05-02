class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int n=nums.size();
            /*sort(nums.begin(), nums.end());
            return nums[n/2];*/
    
            unordered_map<int, int> countFreq;
    
            for(int i = 0; i<n; i++)
            {
                countFreq[nums[i]]++;
            }
            n = n/2;
            for(auto x : countFreq)
            {
                if(x.second > n)
                {
                    return x.first;
                }
            }
            return 0;
        }
    };