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
    vector<int> twoSum(vector<int>& nums, int target) {
      // map with already checked numbers and their index
      unordered_map<int, int> found;

      for (int i = 0; i < nums.size(); ++i) {

        int num = nums[i];
        // Trying to find oposite number to num in found
        auto it = found.find(target - num);

        if (it != found.end()) {
          return {i, it->second};
        }
        found[num] = i;
      }
      return {};
    }
};


//=====================================================================

int main() {

  Solution s;
  vector<int> res;

  vector<int> nums1 = {2,7,11,15};
  int target1 = 9;
  vector<int> res1 = {0, 1};
  res = s.twoSum(nums1, target1);

  std::sort(res.begin(), res.end());
  std::sort(res1.begin(), res1.end());

  assert(res == res1);


  vector<int> nums2 = {3, 2, 4};
  int target2 = 6;
  vector<int> res2 = {1, 2};
  res = s.twoSum(nums2, target2);

  std::sort(res.begin(), res.end());
  std::sort(res2.begin(), res2.end());

  assert(res == res2);


  vector<int> nums3 = {3, 3};
  int target3 = 6;
  vector<int> res3 = {0, 1};
  res = s.twoSum(nums3, target3);

  std::sort(res.begin(), res.end());
  std::sort(res3.begin(), res3.end());

  assert(res == res3);
}