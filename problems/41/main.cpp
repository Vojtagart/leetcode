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
    int firstMissingPositive(vector<int>& nums) {
      for (int i = 0; i < nums.size(); i++) {
        while (nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i] - 1] != nums[i] && nums[i] != i + 1) {
          swap(nums[i], nums[nums[i] - 1]);
        }
      }
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1)
          return i + 1;
      }
      return nums.size() + 1;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}