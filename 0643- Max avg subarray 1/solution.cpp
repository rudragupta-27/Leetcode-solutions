class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double maxAvg = (double)sum / k;
        int left = 0;
        for (int right = k; right < nums.size(); right++) {
            sum = sum - nums[left] + nums[right];
            left++;
            double avg = (double)sum / k;
            if (avg > maxAvg) {
                maxAvg = avg;
            }
        }
        return maxAvg;
    }
};