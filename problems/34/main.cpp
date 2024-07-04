#include <bits/stdc++.h>

using namespace std;

template <typename _C>
void printContainer(const _C & container) {
  for (const auto & x : container) {
    cout << x << endl;
  }
}

//=====================================================================


class Solution {
  public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int l = 0, h = nums.size() - 1, m = 0;
      return {bsearch(nums, target, true), bsearch(nums, target, false)};
    }

    int bsearch(const vector<int> & nums, int target, bool isLeft) {
      int l = 0, h = nums.size() - 1;
      int res = -1;

      while (l <= h) {
        int m = (l + h) / 2;

        if (nums[m] < target) {
          l = m + 1;
        } else if (nums[m] > target) {
          h = m - 1;
        } else {
          res = m;
          if (isLeft) {
            h = m - 1;
          } else {
            l = m + 1;
          }
        }
      }
      return res;
    }
};


//=====================================================================

int main() {

  Solution s;
  vector<int> vec = {1, 1, 1, 2, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7};

  printContainer(s.searchRange(vec, 7));
    
}