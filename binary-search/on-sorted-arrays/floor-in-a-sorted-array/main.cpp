// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1


class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int sz = arr.size();
        int l = 0;
        int r = sz-1;
        int ans = -1;

        while (l <= r) {
            int mid = l + ((r-l) >> 1);

            if (arr[mid] <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return ans;
    }
};
