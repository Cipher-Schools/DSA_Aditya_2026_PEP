// https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1

class Solution {
  public:
    int findCeil (vector<int>& v, int tar) {
        if (v.back() < tar) return -1;

        int l = 0;
        int r = v.size()-1;
        int ans = -1;

        while (l <= r) {
            int m = l + ((r-l) >> 1);

            if (v[m] < tar) {
                l = m + 1;
            } else {
                r = m - 1;
                ans = m;
            }
        }

        return ans;
    }
};
