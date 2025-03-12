// LeetCode 724. Find Pivot Index
// 日期：2025-03-12
// 难度：Easy
// 题目描述：
// 给你一个整数数组 nums ，请计算数组的 中心下标 。

// 思路：
// 求出总和，依次比较前缀和和剩余部分是否相等
// 时间复杂度 O(n)

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int total = 0, leftSum = 0;
    for (int num : nums) total += num;
    for (int i = 0; i < nums.size(); ++i) {
        if (leftSum == total - leftSum - nums[i])
            return i;
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums) << endl; // 输出 3
    return 0;
}