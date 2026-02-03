// https://leetcode.com/problems/powx-n/submissions/1906621512/


class Solution {
public:
   double myPow(double x, long long n) {
       bool isExpNeg = n < 0;
       double ans = 1;
       double base = x;
       long long pow = abs(n);


       while (pow) {
           if (pow & 1) {
               ans *= base;
           }
           base *= base;
           pow >>= 1;
       }


       return isExpNeg ? 1/ans : ans;
   }
};
