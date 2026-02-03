// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
   int searchInsert(vector<int>& nums, int target) {
       int sz = nums.size();
       int l=0;
       int r = sz-1;
       int ans = 0;


       while (l<=r) {
           int m = l + ((r-l)>>1);


           if (nums[m] == target) {
               ans = m;
               break;
           }


           if (nums[m] < target) {
               ans = m;
               l = m + 1;
           } else {
               r = m-1;
           }
       }


       return ans + (nums[ans] < target);
   }
};
