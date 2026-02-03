// https://leetcode.com/problems/sqrtx/

class Solution {
public:
   int mySqrt(int x) {
       long l = 0;
       long r = x;
       long ans = -1;


       while (l <= r) {
           long m = l + ((r-l) >> 1);
           long msq = m * m;


           if (msq < x) {
               l = m + 1;
               ans = m;
           } else if (msq > x) {
               r = m - 1;
           } else {
               ans = m;
               break;
           }
       }


       return ans;
   }
};
