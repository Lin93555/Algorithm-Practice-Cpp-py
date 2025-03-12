// LeetCode 35. Search Insert Position
// 日期：2025-03-12
// 难度：Easy
// 题目描述：
// 给定一个排序数组和一个目标值，找出目标值在数组中的插入位置。

// 思路：
// 使用二分查找法，时间复杂度 O(log n)

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    cout << searchInsert(nums, target) << endl; // 输出 2
    return 0;
}