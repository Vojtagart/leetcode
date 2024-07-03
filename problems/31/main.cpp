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
    void nextPermutation(vector<int>& nums) {
      int k = -1;

      for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
          k = i;
          break;
        }
      }
      if (k == -1) {
        std::sort(nums.begin(), nums.end());
        return;
      }
      int min = INT_MAX;
      int minIdx = -1;
      for (int i = k + 1; i < nums.size(); i++) {
        if (nums[i] > nums[k] && nums[i] <= min) {
          min = nums[i];
          minIdx = i;
        }
      }
      swap(nums[minIdx], nums[k]);
      reverse(nums.begin() + k + 1, nums.end());
    }
};


//=====================================================================

int main() {

  Solution s;
  vector<int> vec = {2, 3, 1, 3, 3};
  s.nextPermutation(vec);

  printContainer(vec);
    
}