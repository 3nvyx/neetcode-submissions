class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        if len(nums) > 1:
            return len(nums) != len(set(nums))
        else:
            return False