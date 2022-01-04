#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.size() == 0) {
//             return  0;
//         }
//         auto index = nums.begin();          //指向当前元素，判断该元素是否要被删除，当当前元素是最后一个不需要判断
//         for (; index != nums.end() - 1; ) {
//             if (*index == *(index + 1)) {
//                 index = nums.erase(index);
//             } else {
//                 index ++;
//             }
//         }
//         return nums.size();
//     }
// };

//优化 1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return  0;
        }
        int cnt = 1;
        int left, right;
        left = right = 0;

        while (right < nums.size()) {
            if (nums[left] != nums[right]) {
                nums[left + 1] = nums[right];
                right ++;
                left ++;
                cnt ++;
            } else {
                right ++;
            }
        }
        return cnt;
    }
};