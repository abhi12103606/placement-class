class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        return max(getMax(nums, 0, nums.size() - 2), getMax(nums, 1, nums.size() - 1));        
    }

private:
    int getMax(vector<int>& nums, int start, int end) {
        int prev = 0, maxi = 0;

        for (int i = start; i <= end; ++i) {
            int temp = max(maxi, prev + nums[i]);
            prev = maxi;
            maxi = temp;
        }

        return maxi;
    }    
};