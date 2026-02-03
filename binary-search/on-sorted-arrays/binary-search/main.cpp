// https://leetcode.com/problems/binary-search/

class Solution {
public:
   int search(vector<int>& nums, int tar) {
       for (int l=0, r=nums.size()-1; l<=r; ) {
           int m = l + ((r-l) >> 1);

           if (nums[m] < tar) {
               l = m+1;
           } else if (nums[m] > tar) {
               r = m-1;
           } else {
               return m;
           }
       }

       return -1;
   }
};
