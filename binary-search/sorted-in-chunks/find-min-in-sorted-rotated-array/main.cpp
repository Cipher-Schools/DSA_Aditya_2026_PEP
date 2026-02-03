// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/1906461698/

class Solution {
public:
   int findMin(vector<int>& nums) {
       int sz = nums.size();
       int l = 0;
       int r = sz - 1;


       while (l < r) {
           int m = l + ((r-l) >> 1);


           if (nums[m] > nums[r]) {
               l = m + 1;
           } else {
               r = m;
           }
       }


       return nums[l];
   }
};
