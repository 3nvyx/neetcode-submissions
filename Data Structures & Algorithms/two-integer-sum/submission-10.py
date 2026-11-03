class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i in range(len(nums)):
            needed = target - nums[i]
            if needed in seen :
                return [seen[needed], i]
            ## store nums[i] as value; i as index
            seen[nums[i]] = i