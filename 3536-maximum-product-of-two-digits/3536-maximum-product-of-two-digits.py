class Solution:
    def maxProduct(self, n: int) -> int:
        nums : List[int] = []

        while(n > 0):
            nums.append(int(n % 10))
            n /= 10
        
        nums.sort()
        n = len(nums)
        return nums[n - 1] * nums[n - 2]