class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = {}
        for x in nums:
            if x in freq:
                return True
            else:
                freq[x] = 1

        return False
        