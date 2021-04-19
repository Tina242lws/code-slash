#include <bits/stdc++.h>
using namespace std;

/*************************************************************************/
/****
 * 剑指offer 03.数组中重复的数字
 * 
找出数组中重复的数字。
在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

链接：https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof

case：
输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3 

2 <= n <= 100000

************************************************************/
// Hash/Set Search

// class Solution {
// public:
//     int findRepeatNumber(vector<int>& nums) {
//         int len = nums.size();
//         if(len <= 1) return -1;
//         for(int i:nums){
//             book[i]++;
//             if(book[i]>=2)
//             return i;
//         }
//         return -1;
//     }
// private:
//     unordered_map<int, int> book;
// };

// 原地置换  因为数字只会是0~N 一个萝卜一个坑
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int len = nums.size();
        if(len <= 1) return -1;
        for(int i=0; i<len; ++i){
            while(nums[i]!=i){
                if(nums[i]==nums[nums[i]]);
                    return nums[i];
                swap(nums[i],nums[nums[i]]);
            }
        }
        return -1;
    }
};

int main(){
    vector<int> nums;
    int temp = 0;
    int len = 0;
    cin>>len;
    while(len-->0){
        cin>>temp;
        nums.emplace_back(temp);
    }

    Solution s1;
    cout<< s1.findRepeatNumber(nums) << endl;
    system("pause");

    return 0;
}