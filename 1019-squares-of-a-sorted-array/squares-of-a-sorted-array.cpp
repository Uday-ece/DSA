
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int j = n - 1;
        vector<int> answer(n);
        int k = n - 1;

        while (i <= j) {
            if (nums[i] * nums[i] >= nums[j] * nums[j]) {
                answer[k] = nums[i] * nums[i];
                i++;
            }
            else {
                answer[k] = nums[j] * nums[j];
                j--;
            }
            k--;
        }

        return answer;
    }
};
