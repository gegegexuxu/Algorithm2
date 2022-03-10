class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int* preSum = new int[nums.size()]; 
        preSum[0] = nums[0];
        int preMin = 0 > nums[0] ? nums[0] : 0, Max = preSum[0], max = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            preSum[i] = preSum[i - 1] + nums[i];
            max = nums[i] > max ? nums[i] : max;
            Max = preSum[i] - preMin > Max ? preSum[i] - preMin : Max;
            preMin = preSum[i] < preMin ? preSum[i] : preMin;
        }
        return max > Max ? max : Max;;
    }
};
