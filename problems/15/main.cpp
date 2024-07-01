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
    vector<vector<int>> threeSum(vector<int>& nums) {
      std::sort(nums.begin(), nums.end());
      vector<vector<int>> ret;
        
      for (int i = 0; i < nums.size() - 2; i++) {
        int j = i + 1, k = nums.size() - 1;

        if (nums[i] > 0)
          break;
        if (i > 0 && nums[i] == nums[i - 1])
          continue;

        while (j < k) {
          int res = nums[i] + nums[j] + nums[k];

          if (res > 0) {
            k--;
          } else if (res < 0) {
            j++;
          } else {
            ret.push_back({nums[i], nums[j], nums[k]});
            int pj = nums[j], pk = nums[k];

            while (j < k && pj == nums[j]) {
              j++;
            }
            while (j < k && pk == nums[k]) {
              k--;
            }
          }
        }
      }
      return ret;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}