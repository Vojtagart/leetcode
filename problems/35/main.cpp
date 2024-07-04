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
    int searchInsert(vector<int>& nums, int target) {
      int l = 0, h = nums.size() - 1, m = -1;

      while (l <= h) {
        m = (l + h) / 2;

        if (nums[m] < target) {
          l = m + 1;
        } else if (nums[m] > target) {
          h = m - 1;
        } else {
          return m;
        }
      }
      return target < nums[m] ? m : m + 1;
    }
};


//=====================================================================

int main() {

  Solution s;
  vector<int> vec = {1,3,5,6};
  int target = 4;
  cout << s.searchInsert(vec, target) << endl;
}