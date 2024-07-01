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
    int threeSumClosest(vector<int>& nums, int target) {
      int best = INT_MAX / 2;
      int res;

      std::sort(nums.begin(), nums.end());

      for (int i = 0; i < nums.size() - 2; i++) {
        int l = i + 1, h = nums.size() - 1;

        while (l < h) {
          res = nums[i] + nums[l] + nums[h];

          if (abs(target - res) < abs(target - best))
            best = res;
          
          if (res > target) {
            h--;
          } else if (res < target) {
            l++;
          } else {
            return target;
          }
        }
      }
      return best;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}