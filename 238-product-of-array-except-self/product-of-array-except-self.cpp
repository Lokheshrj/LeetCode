class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        bool single_zero = false;
        bool muti_zero = false;

        for (auto num : nums) {
            if (single_zero and num == 0) {
                muti_zero = true;
                break;
            }
            if (num == 0)
                single_zero = true;
            else
                p *= num;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (muti_zero) {
                nums[i] = 0;
                continue;
            }
            if (single_zero) {
                if (nums[i] != 0)
                    nums[i] = 0;
                else
                    nums[i] = p;
            }
            else
                nums[i] = p / nums[i];
        }
        return nums;
    }
};