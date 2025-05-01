class Solution {
    public:
        void sortColors(vector<int>& nums) {
            // Brute Force
    
            /*int n = nums.size();
            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    int temp;
                    if(nums[i] > nums[j])
                    {
                        temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                    }
                }
            }*/
    
            // Dutch National Flag Algorithm
    
            /*int low = 0, mid = 0, high = nums.size()-1;
            while(mid <= high)
            {
                if(nums[mid] == 0)
                {
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                }
                else if(nums[mid] == 1)
                {
                    mid++;
                }
                else
                {
                    swap(nums[mid], nums[high]);
                    high--;
                }
            }*/
    
            // Or the Most simplest thing you can do in your life
            sort(nums.begin(), nums.end());
        }
    };