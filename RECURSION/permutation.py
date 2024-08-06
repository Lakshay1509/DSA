def solve(nums, index, ans):
    if index >= len(nums):
        ans.append(nums[:])
        return
    
    for j in range(index, len(nums)):
        nums[index], nums[j] = nums[j], nums[index]
        solve(nums, index + 1, ans)
        # backtrack
        nums[index], nums[j] = nums[j], nums[index]

nums = [2, 3, 4, 5, 6,7,8]
ans = []
index = 0

solve(nums, index, ans)

# Print the generated permutations in one line
print(*ans)
