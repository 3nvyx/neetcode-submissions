class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // // brute force
        // for (int i = 0; i < nums.size(); ++i)
        // {
        //     for (int j = (i + 1); j < nums.size(); ++j)
        //     {
        //         if ((nums[i] + nums[j]) == target)
        //         {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};

        vector<pair<int,int>> ans;
        //create vector map of < number, position> 
        for (int i = 0; i < nums.size(); ++i)
        {
            ans.push_back({nums[i], i});
        }

        sort(ans.begin(), ans.end());

        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            int cur = ans[i].first + ans[j].first;
            if (cur == target) 
            {
                return {min(ans[i].second, ans[j].second),
                        max(ans[i].second, ans[j].second)};
            } 
            else if (cur < target) 
            {
                i++;
            } 
            else 
            {
                j--;
            }
        }
        return {};
    }
};
