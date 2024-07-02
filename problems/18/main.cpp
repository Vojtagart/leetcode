#include <bits/stdc++.h>

using namespace std;

template <typename _C>
void printContainer(const _C & container) {
  for (const auto & x : container) {
    for (const auto & y : x) {
      std::cout << y << " ";
    }
    std::cout << std::endl;
  }
}

//=====================================================================


class Solution {
  public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>> res;

      std::sort(nums.begin(), nums.end());

      for (int i = 0; i < static_cast<int>(nums.size()) - 3; i++) {

        if (i > 0 && nums[i] == nums[i - 1])
          continue;
        if (nums[i] >= 0 && nums[i] > target)
          break;

        for (int j = i + 1; j < static_cast<int>(nums.size()) - 2; j++) {

          if (j > i + 1 && nums[j] == nums[j - 1])
            continue;
          if (nums[j] >= 0 && nums[j] > target - nums[i])
            break;

          int l = j + 1, h = nums.size() - 1;

          while (l < h) {

            long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[l] + nums[h];
            if (sum > INT_MAX || sum < INT_MIN) {
              sum > INT_MAX ? h-- : l++;
              continue;
            }

            if (sum < target) {
              l++;
            } else if (sum > target) {
              h--;
            } else {
              res.push_back({nums[i], nums[j], nums[l++], nums[h--]});

              while (l < h && nums[l] == nums[l - 1]) {
                l++;
              }
              while (l < h && nums[h] == nums[h + 1]) {
                h--;
              }
            }
          }
        }
      }
      return res;
    }
};


//=====================================================================

int main() {

  Solution s;
  vector<int> vec = {1,-2,-5,-4,-3,3,3,5};
  int target = -11;

  auto res = s.fourSum(vec, target);

  std::cout << "Result" << std::endl;
  printContainer(res);
}