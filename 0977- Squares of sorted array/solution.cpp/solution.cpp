class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int left =0;
        int right = nums.size()-1;
        int last=nums.size()-1;
        while(left<=right){
            if (nums[left] * nums[left] > nums[right] * nums[right]){
                ans[last]=nums[left]* nums[left];
                last--;
                left++;
            }
            else{
                ans[last]=nums[right]*nums[right];
                last--;
                right--;
            }
        }
        return ans;
    }
};