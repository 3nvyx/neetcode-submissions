class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i)
        {
            int lol = nums[i];
            for (int j = i; j < nums.size() - 1; ++ j)
            {
                if (nums[i] == nums[j+ 1])
                {
                    return true;
                }
            }
        }
        return false;
    }
};