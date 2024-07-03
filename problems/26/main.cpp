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
    int removeDuplicates(vector<int>& nums) {

      int idx = 0;
      int prev = INT_MIN;

      for (int i = 0; i < nums.size(); i++) {
        int cur = nums[i];
        nums[idx] = nums[i];

        if (cur != prev)
          idx++;
        prev = cur;
      }
      return idx;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}