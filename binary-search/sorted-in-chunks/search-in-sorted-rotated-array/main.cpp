// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/1906252024/

class Solution {
public:
   int search(vector<int>& nums, int target) {
       int l = 0;fin
       int sz = nums.size();
       int r = sz-1;


       while (l < r) {
           int m = l + ((r-l) >> 1);


           if (nums[m] > nums[r]) {
               l = m + 1;
           } else {
               r = m;
           }
       }


       if (target <= nums[sz-1]) {
           r = sz-1;
       } else {
           r = l - 1;
           l = 0;
       }


       while (l <= r) {
           int m = l + ((r-l) >> 1);


           if (nums[m] > target) {
               r = m-1;
           } else if (nums[m] == target) {
               return m;
           } else {
               l = m + 1;
           }
       }


       return -1;
   }
};
