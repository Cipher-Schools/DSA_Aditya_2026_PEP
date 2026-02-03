// https://leetcode.com/problems/find-peak-element/

class Solution {
public:
   int findPeakElement(vector<int>& nums) {
       int sz = nums.size();


       if (sz > 1) {
           if (nums[0] > nums[1]) return 0;
           if (nums[sz-1] > nums[sz-2]) return sz-1;
       } else {
           return 0;
       }


       int l = 1;
       int r = sz-2;


       while (l <= r) {
           int m = l + ((r-l) >> 1);


           if (nums[m] > nums[m+1] && nums[m] > nums[m-1]) {
               return m;
           }


           if (nums[m] < nums[m-1]) {
               r = m - 1;
           } else {
               l = m + 1;
           }
       }


       return -1;
   }
};
